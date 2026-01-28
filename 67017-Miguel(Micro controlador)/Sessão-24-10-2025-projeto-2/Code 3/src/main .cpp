#include <Arduino.h>
unsigned long t = 0;
unsigned long tempobotao = 0;
int estadoLED = LOW;
int botao = 0;
int botaopress = 0;

void setup() {
pinMode(2, INPUT);
pinMode(LED_BUILTIN, OUTPUT);
Serial.begin(9600);
}

void loop() {


  botao = !digitalRead(2);

// se apertar
  if (botao)
  {
    botaopress = 1; // ativa o press
    tempobotao = millis(); // comeca a contar
  }

// se press 1
  if(botaopress)
  {
    
    t = millis();// comeca a contar outro tempo
    
    if(t-tempobotao>2000)
    {
//chega no tempo e liga
      digitalWrite(LED_BUILTIN, HIGH);
    }
  }

}
