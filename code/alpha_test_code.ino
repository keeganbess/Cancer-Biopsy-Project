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

const float stallCurrent = 700;
const int PH = 10; //pb2
const int EN = 9; //pb1
const int motorEnable = 11; //pb3

const int pwm = 0;

const int high = 255;

void setup(void)
{
   pinMode(PH, OUTPUT);
   pinMode(EN, OUTPUT);
  deviceState = STANDBY;

  analogWrite(PH, pwm);
  analogWrite(EN, pwm);
  
Serial.begin(115200);
while (!Serial) {
  delay(1);
}

uint32_t currentFrequency;

Serial.println("Hello!");

// Initialize the INA219.
// By default the initialization will use the largest range (32V, 2A). However
// you can call a setCalibration function to change this range (see comments).
ina219.begin();
// To use a slightly lower 32V, 1A range (higher precision on amps):
//ina219.setCalibration_32V_1A();
// Or to use a lower 16V, 400mA range (higher precision on volts and amps):
//ina219.setCalibration_16V_400mA();

Serial.println("Measuring voltage and current with INA219 ...");
}

void loop(void)
{
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
if(deviceState == STANDBY){    
  if(current_mA >= stallCurrent){
    deviceState == CUTTING;
    analogWrite(PH, pwm);
    analogWrite(EN, pwm);
  }
}

delay(2000);
}
