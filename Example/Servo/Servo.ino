#include <Servo.h>
Servo servo_motor;  // Servo's name


void setup() {
  // put your setup code here, to run once:
//Servo
  servo_motor.attach(10);   // Attachs the servo on pin 9 to servo object.
  servo_motor.write(0);   // Set at 115 degrees. 
//  delay(2000);              // Wait for 2s.

}

void loop() {
// for(int i=0; i<=60;i++)
// {
//  servo_motor.write(i);
//  delay(10);
//  }
  

 servo_motor.write(0);
  delay(2000);

   servo_motor.write(150);
  delay(2000);


}
