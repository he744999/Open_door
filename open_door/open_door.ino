// Data: Mon Sep 25 2017
// Autoor: Pomelo
// Discribution: Change the value of close and open to suit your servo
#include <Servo.h>

#define close  10
#define open  170

Servo myservo;

void setup(){
    Serial.begin(9600);
    myservo.attach(9);
    myservo.write(close);
    }

void loop(){
    if(Serial.available()){
      char data = Serial.read();
      if (data == 'o'){
        myservo.write(open);
        Serial.println("Open the door...");
        delay(2000);
        myservo.write(close);
        Serial.println("Close the door...");
        }
      }
    Serial.flush();
    }
