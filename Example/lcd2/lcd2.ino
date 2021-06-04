// to include LCD display
#include <LiquidCrystal.h>
// to include DHT11 sensor
#include <dht.h>
// introduction to pin connected
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
#define dht_dpin A0
int val;
int tempPin = 1;
dht DHT;
void setup() {
 lcd.begin (16,2);
 // the codes written here is to run the programme once
 lcd.print("Booting Up");
 Serial.begin(9600);
 delay(300);//Let system settle
 Serial.println("Humidity and temperature\n\n");
 delay(700);// delay helps the system cool down by have pause
}
void loop() {
 // the codes written here is to run programme repeatedly until the power off or
//stopped.
 DHT.read11(dht_dpin);
 lcd.setCursor(0,1);
 val = analogRead(tempPin);
 float mv = ( val/1024.0)*5000;
 float cel = mv/10;
 float farh = (cel*9)/5 + 32;

 lcd.print("TEMP = ");
 lcd.setCursor(0,1);
15
 lcd.print(cel);
 lcd.print(farh);
// lcd.print(farh,"*F")
 delay(500);// delay sets the frequency
 lcd.print("Humidity = ");
 lcd.print(DHT.humidity);
 lcd.print("% ");
 delay(500);

 lcd.print("temperature = ");
 lcd.print(DHT.temperature);
 lcd.println("C ");
}
