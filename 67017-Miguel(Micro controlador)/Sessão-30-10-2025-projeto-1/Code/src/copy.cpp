// #include <Arduino.h>
// // // int rele;
// // // int botao;
// // // int botao.estado;
// // // int botao.press;//se struct

// enum direcoes
// {
//   cima,
//   baixo,
//   esquerda,
//   direita
// };
// direcoes; 


// typedef struct BASICOS
// {
//   int estado;
//   int periferico;
// };//com struct
// BASICOS Rele1;
// BASICOS Rele2;
// BASICOS Rele3;
// BASICOS Rele4;//normal


// BASICOS Botao[4];//array
// int botao_press;





// // typedef struct eletrovalvula
// // {
// //   int periferico;
// //   int estado;
// //   unsigned long tempo_atual;
// //   unsigned long tempo_anterior;
// // };
// // eletrovalvula e1[1];

// void setup()
// {
// // Botao[0].periferico=2;
// // Botao[1].periferico=3;
// // Botao[2].periferico=4;
// // Botao[3].periferico=5;
// // pinMode(Botao[0].periferico, INPUT);
// // pinMode(Botao[1].periferico, INPUT);
// // pinMode(Botao[2].periferico, INPUT);
// // pinMode(Botao[3].periferico, INPUT);
// // //JEITO DE FORMA BRUTA


// // int x = 0;
// // while (x < 4)
// // {
// //   x += 1;
// //   Botao[x].periferico=x+2;
// //   pinMode(Botao[x].periferico, INPUT);
// // }
// // //USANDO WHILE

// for (int x1 = cima; x1 <= direita; x1++)
// {
//   Botao[x1].periferico=x1+2;
//   pinMode(Botao[x1].periferico, INPUT);
// }
// //USANDO FOR




// //   // rele=2;
// //   //pinMode(rele.OUTPUT);
// //   // botao=3;
// //   //pinMode(botao.periferico,INPUT);
// //   // botao.estado=LOW;
// //   Botao.periferico=2;
// //   Botao.estado=LOW;
// //   Rele.periferico=3;
// //   pinMode(Botao.periferico, INPUT);
// //   pinMode(Rele.periferico, OUTPUT);

// //  Serial.begin(9600);
 
//  }

//  void loop()
//  {







// //   // botao.estado=digitalRead(botao);

// //   // if (botao.estado == HIGH)
// //   // {
// //   //   digitalWrite(rele,HIGH);
  
// //   // }
// //   // else
// //   // {
// //   //   digitalwrite(rele,LOW);
// //   // }

// // botao_press=!botao_press;
// //  Botao.estado=digitalRead(Botao.periferico);
// //  if (Botao.estado==HIGH)
// //  {
// //   botao.press=!botao.press;
// //  }
// //  if (botao.press== HIGH)
// //  {
// //   digitalWrite(rele.periferico,HIGH);
// //   delay(500);
// //   digitalWrite(rele.periferico,LOW);
// //   delay(500);
// //  }
// //  else
// //  {
// //   digitalWrite(rele.periferico,LOW);
// //  } 
//      };
