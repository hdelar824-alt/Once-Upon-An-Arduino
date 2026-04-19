#include <Servo.h>

Servo servo_hades; //180 servo 
Servo servo_turn; //180 servo 
Servo servo_music; //360 servo 
Servo servo_love; //360 servo 

const int ledPin = 11; 

//switches
const int buttonPin = 2;
const int buttonPin_2 = 3; 
const int buttonPin_3 = 4;
const int buttonPin_4 = 5; 


void setup() {
  servo_hades.attach(9); 
  pinMode(buttonPin, INPUT);
  
  servo_turn.attach(10); 
  pinMode(buttonPin_2, INPUT); //button for turn 

  pinMode(ledPin, OUTPUT);

  servo_music.attach(12); 
  pinMode(buttonPin_3, INPUT); 

  servo_love.attach(13); 
  pinMode(buttonPin_4, INPUT); 
}

void loop() {

  //flip up hades 
  //servo is triggered to turn up 90 degrees 
  if (digitalRead(buttonPin) == HIGH) {
    servo_hades.write(120); //move
    delay(1000); //wait for about a second 
    digitalWrite(ledPin, HIGH); //turn led on 

  } else {
    servo_hades.write(0); //not move
    digitalWrite(ledPin, LOW); //keep led off 
  }


  //orpheus turning around 
  //servo is triggered to turn 180 degrees 
  if (digitalRead(buttonPin_2) == HIGH) {
    servo_turn.write(180); //turn orpheus around 
  } else {
    servo_turn.write(0); //starting position
  }

  //the world singing with orpheus 
  //servo is triggered to rotate 360 degrees slowly 
  if (digitalRead(buttonPin_3) == HIGH) {
    servo_music.write(98); //begin spin 
  } else {
    servo_music.write(90); //don't spin 
  }

  //orpheus and eurydice fall in love 
  //servo is triggereed to rotate 360 degrees slowly 
  if (digitalRead(buttonPin_4) == HIGH) {
    servo_love.write(98); //begin spin 
  } else {
    servo_love.write(90); //don't spin 
  }





}