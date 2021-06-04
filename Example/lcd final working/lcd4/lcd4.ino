
//LCD text with incrementing number
//Include the library code
#include <LiquidCrystal.h>
//Start the time at 0
int time =0;
//Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(2,3,4,5,6,7);
void setup()
{
//Set up the LCD's number of columns and rows:
lcd.begin(16,2);
// Print a message to the LCD.
lcd.print("Sir. SURAJKUMAR");
}
void loop()
{
//Move cursor to second line, first position
lcd.setCursor(0,1);
lcd.print("    WELCOME");
}
