#include <Arduino.h>
unsigned long t = 0;
unsigned long t2 = 0;
unsigned long tempo_anterior = 0;
unsigned long tempo_anterior2 = 0;
int estadoLED = LOW;
void setup() {
pinMode(LED_BUILTIN, OUTPUT);
Serial.begin(9600);
}

void loop() {
 t = millis();
 t2 = millis();

    if (t - tempo_anterior> 3000)
 {
  
  Serial.print("t - ");
  Serial.println(t);
   Serial.print("tempo_anterior - ");
  Serial.println(tempo_anterior);
  tempo_anterior = millis();
 }
 if (t2 - tempo_anterior2> 3000)
 {

  Serial.print("t2 - ");
 Serial.println(t2);
   Serial.print("tempo_anterior2 - ");
  Serial.println(tempo_anterior2);
  tempo_anterior2 = millis();
 
  estadoLED = !estadoLED;
  Serial.print("estadoLED - ");
  Serial.println(estadoLED);

  digitalWrite(LED_BUILTIN,estadoLED);
 }
 
 
 
  }
  
  
