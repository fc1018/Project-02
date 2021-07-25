#include <Arduino.h>

//Project 02
int switchstate = 0;

void setup() {
  //Green LED
  pinMode(3, OUTPUT);
  
  //Red LED
  pinMode(4, OUTPUT);
  
  //Red LED
  pinMode(5, OUTPUT);
  
  //Arduino IN
  pinMode(2, INPUT);
}

void loop() {
  switchstate = digitalRead(2);

  if ( switchstate == LOW ){

    delay(2000);

    digitalWrite (3, HIGH);
    digitalWrite (4, LOW);
    digitalWrite (5, LOW);
  }
  else {

      digitalWrite (3, LOW);
      digitalWrite (4, LOW);
      digitalWrite (5, HIGH);

      delay (250);

      digitalWrite (4, HIGH);
      digitalWrite (5, LOW);

      delay (250);
  }

}