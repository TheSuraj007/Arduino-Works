int ledPin = 13;
int pirPin = 8;
int pirValue;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(pirPin, INPUT);
digitalWrite(ledPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
pirValue = digitalRead(pirPin);
digitalWrite(ledPin, pirValue);
}
