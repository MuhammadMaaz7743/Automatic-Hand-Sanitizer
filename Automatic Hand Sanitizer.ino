#include <Servo.h>
Servo myservo; 
int pos;
int Signal = 8;
void setup() 
{
  pinMode(Signal, INPUT);
  myservo.attach(9);  
}
void loop() {
  int buttonState = digitalRead(Signal);
  delay(1); 
if (buttonState == 0)
    {
  for ( pos = 0; pos < 180; pos += 1) 
   { 
    myservo.write(pos);             
    delay(15);                        
   }
    }
else
    {
  for ( ;pos <= 80; pos += 1) 
  { 
    myservo.write(pos);             
    delay(5);                        
   }
    }
}



/*
#include              //Servo library
 
Servo servo_test;        //initialize a servo object for the connected servo  
                
int angle = 0;    
 
void setup() 
{ 
  servo_test.attach(9);      // attach the signal pin of servo to pin9 of arduino
} 
  
void loop() 
{ 
  for(angle = 0; angle < 180; angle += 1)    // command to move from 0 degrees to 180 degrees 
  {                                  
    servo_test.write(angle);                 //command to rotate the servo to the specified angle
    delay(15);                       
  } 
 
  delay(1000);
  
  for(angle = 180; angle>=1; angle-=5)     // command to move from 180 degrees to 0 degrees 
  {                                
    servo_test.write(angle);              //command to rotate the servo to the specified angle
    delay(5);                       
  } 

    delay(1000);
}
*/
