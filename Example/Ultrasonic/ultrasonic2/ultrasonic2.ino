/*
    Ultrasonic sensor Pins:
    VCC: +5VDC
    Trig : Trigger (INPUT) - Pin11
    Echo: Echo (OUTPUT) - Pin 12
    GND: GND
*/

int trigPin = 11;
int echoPin = 12;
long duration, cm, inches;
int LED_START = 13;
int LED_STOP = 10; 


void setup() {
 //Serial Port begin
 Serial.begin (9600);
 //Define inputs and outputs
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(LED_START, OUTPUT);
 pinMode(LED_STOP, OUTPUT);
}


void loop()
{

    Data_Read();
  
   if(cm <= 7)
   {
     Start(); 
   }

 delay(100);  
}


void Data_Read()
{


     // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
     // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  
     digitalWrite(trigPin, LOW);
     delayMicroseconds(5);
     
     digitalWrite(trigPin, HIGH);
     delayMicroseconds(10);
     
     digitalWrite(trigPin, LOW);
     
     // Read the signal from the sensor: a HIGH pulse whose
     // duration is the time (in microseconds) from the sending
     // of the ping to the reception of its echo off of an object.
  
     pinMode(echoPin, INPUT);
     duration = pulseIn(echoPin, HIGH);
     
     // convert the time into a distance
     
     cm = (duration/2) / 29.1;
     inches = (duration/2) / 74;
    
     Serial.print(inches);
     Serial.print("in, ");
     Serial.print(cm);
     Serial.print("cm");
     Serial.println();
 
}

void Start()
{
     digitalWrite(LED_STOP, LOW);
    digitalWrite(LED_START, HIGH);
    delay(200);
    Stop();
  
}

void Stop()
{

  
  while(true)
  {
    digitalWrite(LED_START, LOW);
    delay(1000);
    Data_Read();
    if(cm >= 7)
    {
      digitalWrite(LED_STOP, HIGH);
      break;
    }
    
  }
  Serial.println("Exit");
}