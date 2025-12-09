#include <Arduino.h>


int s = 0;
int x = 1;

void setup() {
pinMode(4, INPUT);
pinMode(5, INPUT);
pinMode(2, OUTPUT);
Serial.begin(9600);
}

void loop() {
s = digitalRead(4);
if (s)
{
  digitalWrite(2, HIGH);


}
x = digitalRead(5);
if (x)
{
  digitalWrite(2, LOW);


}



}