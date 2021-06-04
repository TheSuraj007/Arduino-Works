/*
The following components are required to build this project;
An Arduino UNO board
1.3″ (132×64) OLED Display
10k Resistor( -ve probe, 
100k Resistor
A breadboard
Jumper wires

*/




#include "U8glib.h"            // U8glib library for the OLED
           
int analogInput = 0;
float vout = 0.0;
float vin = 0.0;
float R1 = 100000.0; // resistance of R1 (100K)
float R2 = 10000.0; // resistance of R2 (10K) 
int value = 0;
U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NO_ACK);  // Display which does not send ACK
void setup()
{
   pinMode(analogInput, INPUT);
}
void loop(){
   // read the value at analog input
   value = analogRead(analogInput);
   vout = (value * 5.0) / 1024.0; // see text
   vin = vout / (R2/(R1+R2)); 
   if (vin<0.09) {
   vin=0.0;//statement to quash undesired reading !
} 
  u8g.firstPage();  
  do 
    {
     draw();      
    }
  while( u8g.nextPage() );
delay(500);
}
void draw(void) 
{
  u8g.setFont(u8g_font_profont17r);        // select font
  u8g.drawStr(18, 12, "VOLTAGE"); 
  u8g.setPrintPos(33,40);
  u8g.drawRFrame(15, 20, 100, 30, 10);     // draws frame with rounded edges
  u8g.println(vin);                        //Prints the voltage
  u8g.println("V");
}
