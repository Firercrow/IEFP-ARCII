#include "DHT.h"
#include <LiquidCrystal.h>

// --- LCD ---
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

// --- DHT ---
#define DHTPIN   6
#define DHTTYPE  DHT11
DHT dht(DHTPIN, DHTTYPE);

// --- Saída ---
#define RELAY_PIN 3

// --- Encoder ---
#define ENC_CLK 4
#define ENC_DT  5
#define ENC_SW  2

// --- Setpoints ---
int T0 = 24;
int T1 = 26;

// --- Estado ---
bool aquecimento = false;

// ---------------------------------------------------------
// Aguarda libertação do botão (anti-salto entre menus)
// ---------------------------------------------------------
void esperaSoltarBotao() {
  while (digitalRead(ENC_SW) == LOW) {
    delay(10);
  }
  delay(50);
}

// ---------------------------------------------------------
// Botão ENTER com debounce
// ---------------------------------------------------------
bool botaoClique() {
  static bool last = HIGH;
  static unsigned long t0 = 0;

  bool raw = digitalRead(ENC_SW);

  if (raw != last) {
    t0 = millis();
    last = raw;
  }

  if ((millis() - t0) > 40 && raw == LOW)
    return true;

  return false;
}

// ---------------------------------------------------------
// Encoder estável (flanco descendente do CLK)
// ---------------------------------------------------------
int encoderDelta() {
  static int lastCLK = HIGH;
  int delta = 0;

  int clk = digitalRead(ENC_CLK);

  if (lastCLK == HIGH && clk == LOW) {
    if (digitalRead(ENC_DT) == LOW)
      delta = +1;
    else
      delta = -1;
  }

  lastCLK = clk;
  return delta;
}

// ---------------------------------------------------------
// Menu de definição de T0 e T1
// ---------------------------------------------------------
void menuSetpoints() {

  int valor = T0;

  // ===== T0 =====
  lcd.clear();
  while (true) {
    int d = encoderDelta();
    if (d != 0) {
      valor += d;
      if (valor < 5)  valor = 5;
      if (valor > 70) valor = 70;
    }

    lcd.setCursor(0, 0);
    lcd.print("Definir T0 (C)");
    lcd.setCursor(0, 1);
    lcd.print("T0=");
    lcd.print(valor);
    lcd.print("  ENTER");

    if (botaoClique()) {
      T0 = valor;
      esperaSoltarBotao();
      break;
    }
    delay(40);
  }

  // ===== T1 =====
  valor = T0 + 1;
  lcd.clear();

  while (true) {
    int d = encoderDelta();
    if (d != 0) {
      valor += d;
      if (valor < T0 + 1) valor = T0 + 1;
      if (valor > 70)     valor = 70;
    }

    lcd.setCursor(0, 0);
    lcd.print("Definir T1 (C)");
    lcd.setCursor(0, 1);
    lcd.print("T1=");
    lcd.print(valor);
    lcd.print("  ENTER");

    if (botaoClique()) {
      T1 = valor;
      esperaSoltarBotao();
      break;
    }
    delay(40);
  }

  // ===== Resumo =====
  lcd.clear();
  lcd.print("Setpoints OK");
  lcd.setCursor(0, 1);
  lcd.print("T0=");
  lcd.print(T0);
  lcd.print(" T1=");
  lcd.print(T1);
  delay(1500);
  lcd.clear();
}

// ---------------------------------------------------------
void setup() {
  Serial.begin(9600);
  Serial.println(F("Termostato Digital - DHT11"));

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);

  pinMode(ENC_CLK, INPUT_PULLUP);
  pinMode(ENC_DT,  INPUT_PULLUP);
  pinMode(ENC_SW,  INPUT_PULLUP);

  dht.begin();

  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("Termostato DHT11");
  lcd.setCursor(0, 1);
  lcd.print("A configurar...");
  delay(900);

  menuSetpoints();
}

// ---------------------------------------------------------
void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  if (isnan(t) || isnan(h)) {
    lcd.setCursor(0, 0);
    lcd.print("Erro no sensor ");
    lcd.setCursor(0, 1);
    lcd.print("DHT11         ");
    delay(2000);
    return;
  }

  // --- Histerese ---
  if (t > T1 && aquecimento) {
    aquecimento = false;
    digitalWrite(RELAY_PIN, LOW);
  }
  else if (t < T0 && !aquecimento) {
    aquecimento = true;
    digitalWrite(RELAY_PIN, HIGH);
  }

  // --- LCD ---
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(t, 1);
  lcd.print((char)223);
  lcd.print("C H:");
  lcd.print(h, 0);
  lcd.print("% ");

  lcd.setCursor(0, 1);
  lcd.print("T0:");
  lcd.print(T0);
  lcd.print(" T1:");
  lcd.print(T1);
  lcd.print(" ");
  lcd.print(aquecimento ? "ON " : "OFF");

  delay(1000);
}