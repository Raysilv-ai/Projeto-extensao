//Sistema Embarcado
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int currentSensorPin = A0;
const int voltageSensorPin = A1;
const int lightPin = 7;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(lightPin, OUTPUT);
  digitalWrite(lightPin, LOW);
}

void loop() {
  int currentReading = analogRead(currentSensorPin);
  int voltageReading = analogRead(voltageSensorPin);

  float current = (currentReading / 1024.0) * 5.0;
  float voltage = (voltageReading / 1024.0) * 5.0;
  float power = current * voltage;

  lcd.setCursor(0, 0);
  lcd.print("Power: ");
  lcd.print(power);
  lcd.print(" W");

  Serial.print("Current: ");
  Serial.print(current);
  Serial.print(" A, Voltage: ");
  Serial.print(voltage);
  Serial.print(" V, Power: ");
  Serial.print(power);
  Serial.println(" W");

  // Controle de iluminação baseado no consumo de energia
  if (power > 50) { // Exemplo de condição
    digitalWrite(lightPin, LOW); // Desliga a luz se o consumo for alto
  } else {
    digitalWrite(lightPin, HIGH); // Liga a luz se o consumo for baixo
  }

  delay(1000);
}

