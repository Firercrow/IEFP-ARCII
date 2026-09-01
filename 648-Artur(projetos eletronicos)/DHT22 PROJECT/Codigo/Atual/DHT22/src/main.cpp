#include <Wire.h>
#include <LiquidCrystal.h>
#include <Arduino.h>

// --- PROTÓTIPOS DAS FUNÇÕES (Resolve o erro 'not declared') ---
void mostraMenu();
void medirUltrassons();

// --- CONFIGURAÇÃO LCD ---
LiquidCrystal lcd(12, 11, 10, 9, 8, 7); 

#define TRIG_PIN     6
#define ECHO_PIN     5
#define BUTTON_MENU  2
#define BUTTON_MEAS  3
#define USAR_LCD true

bool modoTempo = false;

void setup() {
  Serial.begin(9600);
  
  if (USAR_LCD) {
    lcd.begin(16, 2); 
    lcd.clear();
    lcd.print("Ultrassons");
    delay(1500);
  }

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUTTON_MENU, INPUT_PULLUP);
  pinMode(BUTTON_MEAS, INPUT_PULLUP);

  mostraMenu();
}

void loop() {
  if (digitalRead(BUTTON_MENU) == LOW) {
    modoTempo = !modoTempo;
    mostraMenu();
    delay(300);
  }

  if (digitalRead(BUTTON_MEAS) == LOW) {
    medirUltrassons();
    delay(300);
  }
}

void mostraMenu() {
  if (USAR_LCD) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Modo medicao:");
    lcd.setCursor(0, 1);
    lcd.print(modoTempo ? "Tempo (us)" : "Distancia cm");
  }
  Serial.println(modoTempo ? "Modo: Tempo" : "Modo: Distancia");
}

void medirUltrassons() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(5);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH, 30000);

  if (duration == 0) {
    if (USAR_LCD) { lcd.clear(); lcd.print("Sem eco!"); }
    Serial.println("Erro: Sem eco");
    return;
  }

  int distancia = duration / 58;

  if (USAR_LCD) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(modoTempo ? "Tempo eco:" : "Distancia:");
    lcd.setCursor(0, 1);
    if (modoTempo) { lcd.print(duration); lcd.print(" us"); }
    else { lcd.print(distancia); lcd.print(" cm"); }
  }
  Serial.print("Leitura: ");
  Serial.println(modoTempo ? (String)duration + " us" : (String)distancia + " cm");
}
