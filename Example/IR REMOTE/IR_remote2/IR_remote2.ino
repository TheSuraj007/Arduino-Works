#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

#include <Irremote.h> //The program uses a library in this sketch. This saves
us a lot of work, with reading out the code of the infrared light.
int RECV_PIN = 11; //The contact which outputs the data gets connected with pin
11.
IRrecv irrecv(RECV_PIN); //Here we are defining an object, that is supposed to
read out the infrared sensor on pin 11.
decode_results results; //This command defines that the read out infrared data
gets saved under “results”.
void setup()
{
Serial.begin(9600); //In the setup we are starting the serial connection, to
see the data from the remote on the serial monitor.
pinMode (13, OUTPUT);
irrecv.enableIRIn(); //This command initializes the infrared sensor.
}
void loop()
{ //The loop part is quite short because of the used library.
if (irrecv.decode(&results)) { //If data is received...
Serial.println(results.value, DEC); //..they should show up on the serial
monitor as decimal number (DEC).
irrecv.resume(); //Receive the next value.
}
}
