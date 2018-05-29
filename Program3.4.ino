#include <LiquidCrystal.h>
LiquidCrystal lcd(2,4,6,8,10,12);
void setup() {
  lcd.begin(16, 2);
  lcd.print("Arduino");
}
void loop() {
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);
}

