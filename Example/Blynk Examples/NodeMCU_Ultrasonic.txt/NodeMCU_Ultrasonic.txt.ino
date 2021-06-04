#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "Auth Code received on mail";
char ssid[] = "Hotspot Name";
char pass[] = "Hotspot password";

WidgetLCD lcd(V1);

const int echoPin = D4;
const int trigPin = D2;

long duration; 
int distance; 


void setup()
{ Serial.begin(9600);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
    
  Blynk.begin(auth, ssid, pass);
  lcd.clear(); //Use it to clear the LCD Widget
  lcd.print(0, 0, "Distance = "); // use: (position X: 0-15, position Y: 0-1, "Message you want to print")
  
}

void loop()
{ digitalWrite(trigPin, LOW);
  delayMicroseconds(20);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.017; 
                  
  lcd.print(11, 0, "    ");
  lcd.print(11, 0, distance);
  Blynk.virtualWrite(V2, distance);
  Blynk.run();
  delay(500);
}
