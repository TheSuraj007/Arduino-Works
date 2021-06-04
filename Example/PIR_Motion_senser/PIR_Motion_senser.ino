void setup() {
  // put your setup code here, to run once:
pinMode(3, INPUT);
pinMode(13, OUTPUT);
pinMode(9, OUTPUT);
digitalWrite(13, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(3) == HIGH);
digitalWrite(13, HIGH);
tone(9, 400);
}
