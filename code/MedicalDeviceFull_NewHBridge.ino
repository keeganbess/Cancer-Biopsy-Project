#include <Wire.h>
#include <Adafruit_INA219.h>

Adafruit_INA219 ina219;

enum states {
  STANDBY,
  CUTTING,
  REMOVAL,
  EXITING
};

enum states deviceState;

const float stallCurrent = 61;

const int buttonPin = 15;

const int EN = 7; // analog
const int PH = 6; //digital
int button = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  
  pinMode(EN, OUTPUT);
  pinMode(PH, OUTPUT);

  deviceState = STANDBY;
  analogWrite(EN, 0); // this will brake, regardless of what ph is 
  digitalWrite(PH, HIGH);
  Serial.begin(115200);
  while (!Serial) {
      delay(1);
  }
  ina219.begin();
}



void loop() {
float shuntvoltage = 0;
float busvoltage = 0;
float current_mA = 0;
float loadvoltage = 0;
float power_mW = 0;

shuntvoltage = ina219.getShuntVoltage_mV();
busvoltage = ina219.getBusVoltage_V();
current_mA = ina219.getCurrent_mA();
power_mW = ina219.getPower_mW();
loadvoltage = busvoltage + (shuntvoltage / 1000);

Serial.print("Bus Voltage: "); Serial.print(busvoltage); Serial.println(" V");
Serial.print("Shunt Voltage: "); Serial.print(shuntvoltage); Serial.println(" mV");
Serial.print("Load Voltage: "); Serial.print(loadvoltage); Serial.println(" V");
Serial.print("Current: "); Serial.print(current_mA); Serial.println(" mA");
Serial.print("Power: "); Serial.print(power_mW); Serial.println(" mW");
Serial.println("");   
  // put your main code here, to run repeatedly:
   button = digitalRead(buttonPin);
   if(deviceState == STANDBY){    
    if(button == HIGH){
      deviceState = CUTTING;
      analogWrite(EN, 255);
      digitalWrite(PH, LOW);
    }
  }
  else if(deviceState == CUTTING){
    if(current_mA >= stallCurrent){
      analogWrite(EN, 0);
      digitalWrite(PH, HIGH);
      deviceState = REMOVAL;
    }
  }

  else if(deviceState == REMOVAL){
    if(button == HIGH){
      deviceState = EXITING;
      analogWrite(EN, 255);
      digitalWrite(PH, LOW);
    }
  }
            
  else if(deviceState == EXITING){
    if(current_mA >= stallCurrent){
      analogWrite(EN, 0);
      digitalWrite(PH, LOW);
      deviceState = STANDBY;
    }
  }
   Serial.print(button);         
  
   delay(500);
}
