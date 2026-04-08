#include <Servo.h>

Servo servo_hades; //180 servo 
Servo servo_turn; //180 servo 

//switches
const int buttonPin = 2; 
const int buttonPin_2 = 3; 


void setup() {
  servo_hades.attach(9); 
  pinMode(buttonPin, INPUT);
  servo_turn.attach(8); 
  pinMode(buttonPin_2, INPUT); //button for turn 
}

void loop() {

  //flip up hades 
  //servo is triggered to turn up 90 degrees 
  if (digitalRead(buttonPin) == HIGH) {
    servo_hades.write(90); //move
  } else {
    servo_hades.write(0); //not move
  }


  //orpheus turning around 
  //servo is triggered to turn 180 degrees 
  if (digitalRead(buttonPin_2) == HIGH) {
    servo_turn.write(180); //turn orpheus around 
  } else {
    servo_turn.write(0); //no turn 
  }

  //eurydice falls back into underworld 
  //servo triggered to turn down, flipping the platform down 



  //third interaction here

}
