#include <LiquidCrystal.h>
LiquidCrystal lcd(2,4,6,8,10,12);
void setup() {
  lcd.begin(16, 2);
  }
void loop() {
  lcd.setCursor(15,0);
  lcd.print("chandan");
  for(int i=0;i<16;i++)
  {
    lcd.scrollDisplayLeft();
    delay(200);
  }
  }

