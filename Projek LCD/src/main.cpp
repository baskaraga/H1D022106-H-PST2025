#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 26, 2);
int SDA_pin = D3;
int SCL_pin = D4;

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Wire.begin(SDA_pin, SCL_pin);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("PANJI BAGASKARAAAAAAAAAAAA");
  lcd.setCursor(0,1);
  lcd.print("H1D022106");
}

void loop() {
  // put your main code here, to run repeatedly:

  lcd.scrollDisplayLeft();
  delay(300);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}