const int dirPin = 10;  // Direction
const int stepPin = 11; // Step
 
// Motor steps per rotation
const int STEPS_PER_REV = 2*1600;
 
void setup() {
  
  // Setup the pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
}
void loop() {
  
  // Set motor direction clockwise
  digitalWrite(dirPin,HIGH); 
  
  // Spin motor one rotation slowly
  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(300); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(300); 
  }
  
  // Pause for one second
  delay(1000); 
  
  // Set motor direction counterclockwise
  digitalWrite(dirPin,LOW);
  
  // Spin motor two rotations quickly
  for(int x = 0; x < (STEPS_PER_REV ); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(300);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(300);
  }
  
  // Pause for one second
  delay(1000);
}
