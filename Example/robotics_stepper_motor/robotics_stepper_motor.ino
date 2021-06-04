#define led 13
#define IRsensor1 5
#define IRsensor2 6
int i=1;
int j=1;
int p=1;
int D=2;
int a;
int Data1;
int Data2;

void setup() {
  //CW-, CLK-, GND of Aeduino.
pinMode(8, OUTPUT); //CW+
pinMode(9, OUTPUT);  //CLK+
pinMode(led, OUTPUT);
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
pinMode(IRsensor1,INPUT);
pinMode(IRsensor2,INPUT);
Serial.begin(9600);
}

void loop(){
Data2=digitalRead(IRsensor2);
Data1=digitalRead(IRsensor1);
Serial.println(Data2);

if(Data2==0)
{    
  if(Data1==1)
   {   
 motor_start();   
    }
    else
    {
      delay(50);
      digitalWrite(led,LOW);
    }
 }

 
 else if(Data2==1)
{
while(Data2==1)
{
  i=1;
for(;i<200;i++)
       {
        digitalWrite(9, HIGH);
  
        delayMicroseconds(200);
  
        digitalWrite(9, LOW);
  
        delayMicroseconds(200);
        Data2=digitalRead(IRsensor2);
       break;
       }
   }
 }
} 
void motor_start()
 {Data2=1;
  while(Data2==1)
  {
    i=1;
  for(;i<200;i++)
       {
        digitalWrite(9, HIGH);
  
        delayMicroseconds(100);
  
        digitalWrite(9, LOW);
  
        delayMicroseconds(100);
        Data2=digitalRead(IRsensor2);
       }
       digitalWrite(led,HIGH);
       break;
  }   
 }
 
