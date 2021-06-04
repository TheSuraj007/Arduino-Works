#include <LiquidCrystal.h>
// Creates an LCD object. Parameters: (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd = LiquidCrystal(8, 9, 4, 5, 6, 7);
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  lcd.autoscroll();
  lcd.setCursor(16, 0);
  for (int x = 0; x < 10; x++) {
    lcd.print(x);
    delay(500);
  }
  lcd.clear();
}
