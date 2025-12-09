#include <Arduino.h>

int botaopress = 0;



void setup() {
pinMode(4, INPUT);
pinMode(5, INPUT);
pinMode(2, INPUT);
pinMode(3, INPUT);
Serial.begin(9600);
}

void loop() {
  
  if (digitalRead(2) == LOW && digitalRead(5) == HIGH && digitalRead(4) == HIGH && digitalRead(3) == HIGH)
  {
    botaopress = 1;
  }
  if (digitalRead(3) == LOW && digitalRead(5) == HIGH && digitalRead(2) == HIGH && digitalRead(4) == HIGH)
  {
    botaopress = 2;
  }

if (digitalRead(4) == LOW && digitalRead(5) == HIGH && digitalRead(2) == HIGH && digitalRead(3) == HIGH)
  {
    botaopress = 3;
  }
  if (digitalRead(5) == LOW && digitalRead(4) == HIGH && digitalRead(2) == HIGH && digitalRead(3) == HIGH)
  {
    botaopress = 4;
  }
  if (digitalRead(2) == LOW && digitalRead(3) == LOW && digitalRead(4) == HIGH && digitalRead(5) == HIGH)
  {
    botaopress = 5;
  }
  if (digitalRead(2) == LOW && digitalRead(5) == LOW && digitalRead(4) == HIGH && digitalRead(3) == HIGH)
  {
    botaopress = 6;
  }
  if (digitalRead(4) == LOW && digitalRead(3) == LOW && digitalRead(2) == HIGH && digitalRead(5) == HIGH)
  {
    botaopress = 7;
  }
  if (digitalRead(4) == LOW && digitalRead(5) == LOW && digitalRead(2) == HIGH && digitalRead(3) == HIGH)
  {
    botaopress = 8;
  }
    if (digitalRead(4) == LOW && digitalRead(5) == LOW && digitalRead(2) == LOW && digitalRead(3) == LOW)
  {
    botaopress = 9;
  }
    if (digitalRead(4) == HIGH && digitalRead(5) == HIGH && digitalRead(2) == HIGH && digitalRead(3) == HIGH)
  {
    botaopress = 10;
  }
  
  
  switch (botaopress)
  {
  case 1:
    Serial.println("CIMA");
    break;
  case 2:
  
     Serial.println("DIREITA");
     break;
     case 3:
    Serial.println("BAIXO");
    break;
  case 4:
  
     Serial.println("ESQUERDA");
     break;
     case 5:
    Serial.println("DIAGONAL SUPERIOR DIREITA");
    break;
  case 6:
  
     Serial.println("DIAGONAL SUPERIOR ESQUERDA");
     break;
     case 7:
    Serial.println("DIAGONAL INFERIOR DIREITA");
    break;
  case 8:
  
     Serial.println("DIAGONAL INFERIOR ESQUERDA");
     break;
     case 9:
    Serial.println("TUDO LIGADO");
    break;
  case 10:
  
     Serial.println("TUDO DESLIGADO");
     break;
  default:
  
    Serial.println("erro");
    break;
  }

}
