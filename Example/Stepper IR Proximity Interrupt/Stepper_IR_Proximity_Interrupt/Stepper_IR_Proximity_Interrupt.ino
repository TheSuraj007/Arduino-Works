#include <LiquidCrystal.h>
LiquidCrystal lcd = LiquidCrystal(8, 9, 4, 5, 6, 7);

unsigned int count=0;
const int dirPin = 10;  // Direction
const int stepPin = 11; // Step
 int IR = 3;
volatile int IR_state = LOW;
int pin = 2; //define interrupt pin to 2
volatile int state = HIGH; // To make sure variables shared between an ISR
 
// Motor steps per rotation
const int STEPS_PER_REV = 2*1600;
 
void setup() {
  
  // Setup the pins as Outputs
  pinMode(IR, INPUT);
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(pin, INPUT);
  lcd.begin(16, 2);
   attachInterrupt(0, START, RISING);
   attachInterrupt(1, IR_START,FALLING);
}
void loop() {

  lcd.setCursor(0, 0);
  lcd.print("COUNT:-");

  lcd.setCursor(8, 0);
  lcd.print(count);

  
   if(state == HIGH){
  // Set motor direction clockwise
  digitalWrite(dirPin,LOW); 
  
  // Spin motor one rotation slowly
  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(150); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(150); 

    if(state==LOW)
    {
      break;
    }
  }
 }
}

 void START()
 {
  //ISR function
   state = LOW; //toggle the state when the interrupt occurs
count=(count+1);
  }

   void IR_START()
 {
  //ISR function
   state = HIGH; //toggle the state when the interrupt occurs

  }
