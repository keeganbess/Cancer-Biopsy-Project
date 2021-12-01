enum states {
  STANDBY,
  CUTTING,
  REMOVAL,
  EXITING
};

enum states deviceState;


const int sw1 = A1;
const int sw2 = A2;
const int button = A0;

const int xIN1 = 10;
const int xIN2 = 9;
const int motorEnable = 11;

const int pwm = 0;

const int high = 255;

int sw1Val;
int sw2Val;
int buttonVal;

int led = 9;           // the PWM pin the LED is attached to

void setup() {

  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  pinMode(button, INPUT_PULLUP);
  
  pinMode(led, OUTPUT);
  
  pinMode(xIN1, OUTPUT);
  pinMode(xIN2, OUTPUT);
  pinMode(motorEnable, OUTPUT);
  
  deviceState = STANDBY;

  analogWrite(xIN1, high);
  analogWrite(xIN2, high);
  digitalWrite(motorEnable, LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  sw1Val = digitalRead(sw1);
  sw2Val = digitalRead(sw2);
  buttonVal = digitalRead(button);
  
  if(deviceState == STANDBY){    
    if(buttonVal == LOW){
      deviceState = CUTTING;
      analogWrite(xIN1, pwm);
      analogWrite(xIN2, high);
      digitalWrite(motorEnable, HIGH);
    }
  }
            
  else if(deviceState == CUTTING){
    if(sw1Val == LOW){
      analogWrite(xIN1, high);
      analogWrite(xIN2, high);
      digitalWrite(motorEnable, LOW);
      deviceState = REMOVAL;
    }
  }

  else if(deviceState == REMOVAL){
    if(buttonVal == LOW){
      deviceState = EXITING;
      analogWrite(xIN1, high);
      analogWrite(xIN2, pwm);
      digitalWrite(motorEnable, HIGH);
    }
  }
            
  else if(deviceState == EXITING){
    if(sw2Val == LOW){
      analogWrite(xIN1, high);
      analogWrite(xIN2, high);
      digitalWrite(motorEnable, LOW);
      deviceState = STANDBY;
    }
  }

  delay(10);
}
