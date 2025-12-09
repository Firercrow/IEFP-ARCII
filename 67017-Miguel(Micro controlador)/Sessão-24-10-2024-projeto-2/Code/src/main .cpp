#include <Arduino.h>
unsigned long t;

void setup() {
pinMode(LED_BUILTIN, OUTPUT);
Serial.begin(9600);
}

void loop() {
 if (t>10000)
 {
  digitalWrite(LED_BUILTIN, HIGH);
 };
  t = millis();
  Serial.println(t);
  delay(1000);
  if(t>13000)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(300);
    digitalWrite(LED_BUILTIN, LOW);
    delay(300);

  }
  
  
}