//Layfield, Aidan
//Project "Ghost Detector" (EMF Detector in Arduino)
//4/23/2023

#include <LiquidCrystal.h>

// Set the LCD pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD pins

int Antenna = A0;
int val = 0;
int LED = 11;
int buzzer = 6;
int high_emf, curr_emf;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16, 2); // Initialize the LCD w/ 16 columns and 2 rows
  lcd.setCursor(0, 0);
  lcd.print("EMF Level: ");
  lcd.setCursor(0, 1);
  lcd.print("Last Hi EMF: ");
}

void loop() {
  val = analogRead(Antenna);

  lcd.setCursor(12, 0);
  lcd.print("     "); // Clear previous value
  lcd.setCursor(12, 0);
  lcd.print(val);

  lcd.setCursor(12, 1);
  lcd.print("     "); // Clear previous value
  lcd.setCursor(12, 1);
  lcd.print(high_emf);

  if (val >= 2) {
    val = constrain(val, 2, 100);
    curr_emf = val;
    val = map(val, 2, 100, 1, 255);
    analogWrite(LED, val);
    if (curr_emf > high_emf) {
      high_emf = curr_emf;
    }
    digitalWrite(buzzer, HIGH);
    delay(100);
  } else {
    analogWrite(LED, 0);
    digitalWrite(buzzer, LOW);
  }

  //Serial.println(val);
}
