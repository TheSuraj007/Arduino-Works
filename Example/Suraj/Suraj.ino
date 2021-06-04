/*
 Created by Rui Santos
 
 All the resources for this project:
 http://randomnerdtutorials.com/
*/

#include "LedControl.h"
#include "binary.h"

/*
 DIN connects to pin 12
 CLK connects to pin 11
 CS connects to pin 10 
*/
LedControl lc=LedControl(12,11,10,1);

// delay time between faces
unsigned long delaytime=1000;
//star
byte s1[8]= {B00000000,B00000000,B00000000,B00011000,B00011000,B00000000,B00000000,B00000000};

byte s2[8]= {B00000000,B00000000,B00111100,B00111100,B00111100,B00111100,B00000000,B00000000};

byte s3[8]= {B00000000,B01111110,B01111110,B01111110,B01111110,B01111110,B01111110,B00000000};

byte s4[8]= {B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111};

//S
byte ss[8]= {B00111100,B01100110,B01100110,B00110000,B00001100,B01100110,B01100110,B00111100};
//U
byte uu[8]= {B00000000,B01100110,B01100110,B01100110,B01100110,B01100110,B01100110,B00111100};

//R
byte rr[8]= {B01111000,B01111100,B01100110,B01100110,B01111100,B01111000,B01101100,B01100110};

//A
byte a[8]= {B00011000,B00111100,B01100110,B01100110,B01111110,B01100110,B01100110,B01100110};

//J
byte j[8]= {B01111110,B01111110,B00011000,B00011000,B00011000,B11011000,B11011000,B01110000};

void setup() {
  lc.shutdown(0,false);
  // Set brightness to a medium value
  lc.setIntensity(0,3);
  // Clear the display
  lc.clearDisplay(0);  
}

void drawFaces(){
  // Display s4 face
  lc.setRow(0,0,s4[0]);
  lc.setRow(0,1,s4[1]);
  lc.setRow(0,2,s4[2]);
  lc.setRow(0,3,s4[3]);
  lc.setRow(0,4,s4[4]);
  lc.setRow(0,5,s4[5]);
  lc.setRow(0,6,s4[6]);
  lc.setRow(0,7,s4[7]);
  delay(500);
 
 // Display s3 face
  lc.setRow(0,0,s3[0]);
  lc.setRow(0,1,s3[1]);
  lc.setRow(0,2,s3[2]);
  lc.setRow(0,3,s3[3]);
  lc.setRow(0,4,s3[4]);
  lc.setRow(0,5,s3[5]);
  lc.setRow(0,6,s3[6]);
  lc.setRow(0,7,s3[7]);
  delay(500);
 
 // Display s2 face
  lc.setRow(0,0,s2[0]);
  lc.setRow(0,1,s2[1]);
  lc.setRow(0,2,s2[2]);
  lc.setRow(0,3,s2[3]);
  lc.setRow(0,4,s2[4]);
  lc.setRow(0,5,s2[5]);
  lc.setRow(0,6,s2[6]);
  lc.setRow(0,7,s2[7]);
  delay(500);
 
  // Display s1 face
  lc.setRow(0,0,s1[0]);
  lc.setRow(0,1,s1[1]);
  lc.setRow(0,2,s1[2]);
  lc.setRow(0,3,s1[3]);
  lc.setRow(0,4,s1[4]);
  lc.setRow(0,5,s1[5]);
  lc.setRow(0,6,s1[6]);
  lc.setRow(0,7,s1[7]);
  delay(500);
 
  // Display s face
  lc.setRow(0,0,ss[0]);
  lc.setRow(0,1,ss[1]);
  lc.setRow(0,2,ss[2]);
  lc.setRow(0,3,ss[3]);
  lc.setRow(0,4,ss[4]);
  lc.setRow(0,5,ss[5]);
  lc.setRow(0,6,ss[6]);
  lc.setRow(0,7,ss[7]);
  delay(delaytime);

  // Display u face
  lc.setRow(0,0,uu[0]);
  lc.setRow(0,1,uu[1]);
  lc.setRow(0,2,uu[2]);
  lc.setRow(0,3,uu[3]);
  lc.setRow(0,4,uu[4]);
  lc.setRow(0,5,uu[5]);
  lc.setRow(0,6,uu[6]);
  lc.setRow(0,7,uu[7]);
  delay(delaytime);

   // Display R face
  lc.setRow(0,0,rr[0]);
  lc.setRow(0,1,rr[1]);
  lc.setRow(0,2,rr[2]);
  lc.setRow(0,3,rr[3]);
  lc.setRow(0,4,rr[4]);
  lc.setRow(0,5,rr[5]);
  lc.setRow(0,6,rr[6]);
  lc.setRow(0,7,rr[7]);
  delay(delaytime);

   // Display A face
  lc.setRow(0,0,a[0]);
  lc.setRow(0,1,a[1]);
  lc.setRow(0,2,a[2]);
  lc.setRow(0,3,a[3]);
  lc.setRow(0,4,a[4]);
  lc.setRow(0,5,a[5]);
  lc.setRow(0,6,a[6]);
  lc.setRow(0,7,a[7]);
  delay(delaytime);

   // Display J face
  lc.setRow(0,0,j[0]);
  lc.setRow(0,1,j[1]);
  lc.setRow(0,2,j[2]);
  lc.setRow(0,3,j[3]);
  lc.setRow(0,4,j[4]);
  lc.setRow(0,5,j[5]);
  lc.setRow(0,6,j[6]);
  lc.setRow(0,7,j[7]);
  delay(delaytime);
 
}

void loop()
{
  drawFaces();
}
