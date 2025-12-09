#include <Arduino.h>

int s = 0;


void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(2, OUTPUT);
}

void loop() {
s = digitalRead(4);
 if (s)
 {
  Serial.println("high");
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    delay(1000);
 }
 else
  {
  digitalWrite(2, LOW);
  Serial.println("low");
  }
}
