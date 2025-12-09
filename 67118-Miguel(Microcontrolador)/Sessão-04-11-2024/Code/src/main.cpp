#include <Arduino.h>
enum Combos
{
  nada=0,
  cima=1,
  baixo=2,
  esquerda=4,
  direita=8
};
typedef struct botao
{
    int estado;
    int periferico;
}; 
botao b[4];
typedef struct LED
{
    int estado;
    int periferico;
};
LED l[4];

int combos=0;
void controlar_leds(int cimax, int baixox, int direitax, int esquerdax){
      digitalWrite(l[0].periferico,cimax);
    digitalWrite(l[1].periferico,baixox);
    digitalWrite(l[2].periferico,direitax);
    digitalWrite(l[3].periferico,esquerdax);

}
void setup() {
  for(int i = 0; i <=3; i++)
 {
  b[i].periferico = i + 2;
  b[i].estado = LOW;
pinMode(b[i].periferico, INPUT);
 }
 
 l[0].periferico = 6;
 l[1].periferico = 7;
 l[2].periferico = 8;
 l[3].periferico = 9;
 for (int x = 0; x <=3; x++)
 {
    pinMode(l[x].periferico, OUTPUT);
 }
 Serial.begin(9600);
}

void loop() {

  for (int leituras = 0; leituras <=3 ; leituras++)
    {
      b[leituras].estado=!digitalRead(b[leituras].periferico);
    }
    combos = 0;
  for (int combinacoes = 0; combinacoes <=3 ; combinacoes++)
    {
       if (b[combinacoes].estado == HIGH)
       {
    combos += (1<<combinacoes);
    }  
  }
  switch (combos)
  {
  case nada:
    Serial.println("nada");
    controlar_leds( LOW, LOW, LOW, LOW);
    break;
    case cima:
    Serial.println("cima");
    controlar_leds(HIGH, LOW, LOW, LOW);
    break;
    case baixo:
    Serial.println("baixo");
    controlar_leds(LOW, HIGH, LOW, LOW);
    break;
    case cima+direita:
    Serial.println("cima e direita");
    controlar_leds(HIGH, LOW, HIGH, LOW);
    break;
    case cima+esquerda:
    Serial.println("cima esquerda");
    controlar_leds(HIGH, LOW, LOW, HIGH);
    break;
    case baixo+esquerda:
    Serial.println("baixo e esquerda");
    controlar_leds(LOW, HIGH, LOW, HIGH);
    break;
    case baixo+direita:
    Serial.println("baixo e direita");
    controlar_leds(LOW, HIGH, HIGH, LOW);
    break;
    case direita:
    Serial.println("direita");
    controlar_leds(LOW, LOW, HIGH, LOW);
    break;
    case esquerda:
    Serial.println("esquerda");
    controlar_leds(LOW, LOW, LOW, HIGH);
    break;
  
  default:
  Serial.println("ERRO");
    break;
  }
  
    

}