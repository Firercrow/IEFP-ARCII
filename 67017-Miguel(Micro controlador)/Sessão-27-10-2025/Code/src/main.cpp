#include <Arduino.h>
unsigned long t = 0;
unsigned long t2 = 0;
unsigned long tempobotao = 0;
unsigned long tempo_anterior2 = 0;
unsigned long tempo_anterior = 0;
int estadoLED = LOW;
int botao = 0;
int botaopress = 0;

void setup() {

pinMode(2, INPUT);
pinMode(3, OUTPUT);
Serial.begin(9600);
}

void loop() {
//  t2 = millis();


//  if (t2 - tempo_anterior2> 3000)
//  {
//   tempo_anterior2 = millis();
//   estadoLED = !estadoLED;
//   digitalWrite(3,estadoLED);
//  }



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
    
    if(t-tempobotao>5000)
    {
//chega no tempo e liga
      digitalWrite(3, HIGH);
    }
  }
  if(t-tempobotao>10000)
      {
        digitalWrite(3, LOW);
        botaopress = 0;
      }
}