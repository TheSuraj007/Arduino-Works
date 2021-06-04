/* Basic Arduino example code for displaying text on 16x2, 20x4 etc. character LCDs. More info: www.makerguides.com */

// Include the library:
#include <LiquidCrystal.h>

// Create an LCD object. Parameters: (RS, E, D4, D5, D6, D7):2&3 are replaced by 8&9 respectively..
LiquidCrystal lcd = LiquidCrystal(8, 9, 4, 5, 6, 7);

void setup() {
  // Specify the LCD's number of columns and rows. Change to (20, 4) for a 20x4 LCD:
  lcd.begin(16, 2);

 // Set the cursor on the Fourth column and the first row, counting starts at 0:
  lcd.setCursor(16, 0);
  // Print the string 'WELCOME':
  lcd.print("WELCOME TO");
  // Set the cursor on the Fourth column and the second row:
  lcd.setCursor(16, 1);
  // Print the string 'SSM':
  lcd.print("-:) SSM (:-");
}

void loop() {
  lcd.scrollDisplayLeft();
  delay(400);
}
