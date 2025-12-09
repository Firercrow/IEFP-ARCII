#include <Arduino.h>

void setup() {
pinMode(3, OUTPUT);
pinMode(2, OUTPUT);
Serial.begin(9600);
}

void loop() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(3000);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(3000);
}