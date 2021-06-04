int Distance = 0; // Record the number of steps we've taken void setup() {
void setup(){
pinMode(8, OUTPUT);

pinMode(9, OUTPUT);

digitalWrite(8, LOW);

digitalWrite(9, LOW);

}

void loop() {

digitalWrite(8, HIGH);

delayMicroseconds(100);

digitalWrite(8, LOW);

delayMicroseconds(100);


Distance = Distance + 1; // record this step // Check to see if we are at the end of our move

// two rotation for 1/8 bridge and 1 rotation for 1/6 bridge (for this code)

if (Distance == 6400) { // We are! Reverse direction (invert DIR signal)
  delay(500);

if (digitalRead(9) == LOW) {

digitalWrite(9, HIGH); }

else {

digitalWrite(9, LOW);

} // Reset our distance back to zero since we're // starting a new move

Distance = 0; // Now pause for half a second delay(500);

}


}
