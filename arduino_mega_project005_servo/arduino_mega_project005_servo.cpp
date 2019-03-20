// Do not remove the include below
#include "arduino_mega_project005_servo.h"

#include <Arduino.h>
#include <Servo.h>
Servo myServo;
int servoPin=9;

//controling a servo-motor
void setup() {
myServo.attach(servoPin);
}

void loop() {
for (int i=0;i<=180;i=i+20){

  myServo.write(i);
  delay(1000);
  }
  for (int i=180;i>=0;i=i-20){

  myServo.write(i);
  delay(1000);
  }
}
