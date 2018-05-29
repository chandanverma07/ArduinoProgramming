#include <LiquidCrystal.h>
LiquidCrystal lcd(2,4,6,8,10,12);
void setup() 
{
lcd.begin(16,2);
lcd.print("chandan");
}
void loop()
{
  lcd.noCursor();
  delay(3000);
  lcd.cursor();
  delay(3000);
}

