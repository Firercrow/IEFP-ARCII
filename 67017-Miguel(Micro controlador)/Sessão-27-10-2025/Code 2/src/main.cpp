#include <Arduino.h>
int botaoesq = 0;
int botaodir = 0;
int botaopress = 0;
int neutro = 0;


void setup() {

pinMode(2, INPUT);
pinMode(3, INPUT);
Serial.begin(9600);
}

void loop() {
  botaoesq = digitalRead(2);
  botaodir = digitalRead(3);
  if (botaoesq == LOW)
  {
    botaopress = 1;
  }
  if (botaodir == LOW)
  {
    botaopress = 2;
  }
  if (botaoesq == LOW && botaodir == LOW)
  {
    botaopress = 0;
  }
  
  
  switch (botaopress)
  {
  case 1:
    Serial.println("botao esquerda");
    break;
  case 2:
  
     Serial.println("botao direita");
     break;
  default:
  
    Serial.println("neutro");
    break;
  }

}