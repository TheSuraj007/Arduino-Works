int pin = 2; //define interrupt pin to 2
const int ledPin = 10;
volatile int state = LOW; // To make sure variables shared between an ISR
//the main program are updated correctly,declare them as volatile.

void setup() {
   pinMode(ledPin, OUTPUT);
   pinMode(13, OUTPUT); //set pin 13 as output
   pinMode(pin, INPUT);
   attachInterrupt(0, blink, RISING);
   //interrupt at pin 2 blink ISR when pin to change the value
} 
void loop() { 
   digitalWrite(13, state); //pin 13 equal the state value
    if(state == HIGH){
      for(int i=0;i<=255;i++)
    {
      analogWrite(ledPin,i); // turn LED ON
      delay(5);
    }
   analogWrite(ledPin, LOW); // turn LED ON
 }
} 

void blink() { 
   //ISR function
   state = !state; //toggle the state when the interrupt occurs
}
