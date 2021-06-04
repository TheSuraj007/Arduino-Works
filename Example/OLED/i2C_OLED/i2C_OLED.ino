#include "U8glib.h"
U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NONE);

void setup() {
 
}

void loop() {
  
  u8g.firstPage();
  do {
    draw();
  } while (u8g.nextPage() );
  delay(4500);
  
  u8g.firstPage();
  do {
    draw2();
  } while (u8g.nextPage());
  delay(4500);


}
void draw() {
  u8g.setFont(u8g_font_profont12);
  u8g.setPrintPos(0, 10);
  u8g.print("    PBL PROJECT ON");
  u8g.setPrintPos(0, 25);
  u8g.print("      ULTRASONIC.");
  u8g.setPrintPos(0, 40);
  u8g.print("I AM A ROBOT!");
  u8g.setPrintPos(0, 55);
  u8g.print("        ~YOUR FRIEND!");
}
//OLED
void draw2() {
  u8g.setFont(u8g_font_profont12);
  u8g.setPrintPos(0, 10);
  u8g.print("MY NAME IS -");
  u8g.setPrintPos(0, 25);
  u8g.print(">ALPHA< ;-)");
  u8g.setPrintPos(0, 40);
  u8g.setFont(u8g_font_profont17);
  u8g.print("     ~PCE");
}

void draw3() {
  u8g.setFont(u8g_font_profont17);
  u8g.setPrintPos(0, 25);
  u8g.print("  ALPHA");
}

void draw4() {
  u8g.setFont(u8g_font_profont17);
  u8g.setPrintPos(0, 25);
  u8g.print(" OBSTACLE");
}
