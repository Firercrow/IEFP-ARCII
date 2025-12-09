#include <Arduino.h>
enum direcoes
{
    cima,
    direita,
    esquerda,
    baixo
};
enum direcional
{
    desligado,
    Lcima,
    Ldireita,
    Lesquerda,
    Lbaixo,
    supdir,
    supesq,
    infdir,
    infesq,
    todos

};
direcional botao2 = desligado;
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
    l[i].estado = LOW;
    pinMode(l[i].periferico, OUTPUT);
 }
 
 Serial.begin(9600);
 
}

void loop()
{
    for (int i = 0; i <=3 ; i++)
    {
      b[i].estado=digitalRead(b[i].periferico);
    }
    combos = 0;
    for (int i = 0; i <=3 ; i++)
    {
    combos = 0;
       if (b[i].estado == HIGH)
       {
    combos += (1<<i);
    }   
       
    };


switch (combos)
{
case 0:
    botao2 = desligado;
    break;
case 1:
botao2 = Lcima;    break;
    case 2:
    botao2 = Ldireita;
    break;
    case 4:
    botao2 = Lesquerda;
    break;
    case 8:
    botao2 = Lbaixo;
    break;
    case 3:
    botao2 = supdir;
    break;
    case 5:
    botao2 = supesq;
    break;
    case 10:
    botao2 = infdir;
    break;
    case 12:
    botao2 = infesq;
    break;
    case 15:
    botao2 = todos;
    break;
default:
    Serial.println("erro");
    break;
};
switch (botao2)
{
case desligado:
    // desligado
    Serial.println("desligado");
    break;
case Lcima:
//led cima   
Serial.println("cima");
break;
    case Ldireita:
    // led direita
    Serial.println("direita");
    break;
    case Lesquerda:
    //led esquerda
    Serial.println("esquerda");
    break;
    case Lbaixo:
    //led baixo
    Serial.println("baixo");
    break;
    case supdir:
    //led cima direita
    Serial.println("cima direita");
    break;
    case supesq:
    //led cima esq
    Serial.println("cima esquerda");
    break;
    case infdir:
    //led inf dir
    Serial.println("inferior direita");
    break;
    case infesq:
    //led inf esq
    Serial.println("inferior esquerda");
    break;
    case todos:
    //todos
    Serial.println("todos");
    break;
default:
    Serial.println("erro");
    break;
};    


}