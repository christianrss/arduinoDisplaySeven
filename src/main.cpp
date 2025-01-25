#include <Arduino.h>
#include "displayseven.hpp"

const int freq1 = 800;
const int freq2 = 1000;
const int freq3 = 1200;

const int duration = 200;
const int interval = 100;

const int pinLed = 4;

DisplaySeven *displaySeven;

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
  // a, b, c, d, e, f, g, dp
  displaySeven = new DisplaySeven(8, 9, 11, 12, 13, 7, 6, 10);
}

void loop() {
  int pot = analogRead(0);
  pot = pot / 100;

  Serial.println(pot);

  switch (pot) {
    case 0:
      displaySeven->displayZero();
      break;
    case 1:
      displaySeven->displayOne();
      break;
    case 2:
      displaySeven->displayTwo();
      break;
    case 3:
      displaySeven->displayThree();
      break;
    case 4:
      displaySeven->displayFour();
      break;
    case 5:
      displaySeven->displayFive();
      break;
    case 6:
      displaySeven->displaySix();
      break;
    case 7:
      displaySeven->displaySeven();
      break;
    case 8:
      displaySeven->displayEight();
      break;
    case 9:
      displaySeven->displayNine();
      break;
    case 10:
      displaySeven->displayDotPoint();
      break;
  }

  tone(5, freq1, duration);
  delay(duration + interval);
  tone(5, freq2, duration);
  delay(duration + interval);
  tone(5, freq3, duration);
  delay(duration + interval);

  digitalWrite(pinLed, HIGH);
  delay(pot * 100);
  digitalWrite(pinLed, LOW);
}
