#include <Arduino.h>
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
int combos = 0;
enum LEDS
{
    cima,
    baixo,
    esquerda,
    direita
};

void setup()
{
 for(int i = 0; i <=3; i++)
 {
  b[i].periferico = i + 2;
  b[i].estado = LOW;
pinMode(b[i].periferico, INPUT);
 }
 for (int i = 0; i <=3; i++)
 {
    l[i].periferico = i + 6;
    pinMode(l[i].periferico, OUTPUT);
 }
 
 Serial.begin(9600);
 
}

void loop()
{
    for (int leituras = 0; leituras <=3 ; leituras++)
    {
      b[leituras].estado=digitalRead(b[leituras].periferico);
    }
    combos = 0;
    for (int combinacoes = 0; combinacoes <=3 ; combinacoes++)
    {
       if (b[combinacoes].estado == HIGH)
       {
    combos += (1<<combinacoes);
    }  
    }

  
    for (int LED_CORRESPONDENTE = 0; LED_CORRESPONDENTE <= 3; LED_CORRESPONDENTE++)
    {
        int estadoLED = (1<<LED_CORRESPONDENTE);
        if ((combos & estadoLED) > 0)
        {
           digitalWrite(l[LED_CORRESPONDENTE].periferico, LOW);
        }
        else
        {
            digitalWrite(l[LED_CORRESPONDENTE].periferico, HIGH);
        }
    } 
 delay(50);
    }



