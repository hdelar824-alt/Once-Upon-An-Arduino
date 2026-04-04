#include <Servo.h>

Servo servo_hades;
const int buttonPin = 2; 

void setup() {
  servo_hades.attach(9); 
  pinMode(buttonPin, INPUT);
}

void loop() {
  //flip up hades 
  if (digitalRead(buttonPin) == HIGH) {
    servo_hades.write(90); //move
  } else {
    servo_hades.write(0); //not move
  }

  //second interaction 


}
