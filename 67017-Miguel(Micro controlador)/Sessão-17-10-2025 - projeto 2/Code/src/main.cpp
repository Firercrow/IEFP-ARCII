#include <Arduino.h>


int s = 0;

void setup() {
pinMode(4, INPUT);
pinMode(2, OUTPUT);
Serial.begin(9600);
}

void loop() {
s = digitalRead(4);
if (s)
{
  digitalWrite(2, LOW);
  Serial.println("Button Pressed");

}
else
{
  digitalWrite(2, HIGH);
  Serial.println("Button Not Pressed");
}

}