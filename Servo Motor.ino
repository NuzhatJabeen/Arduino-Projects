//Servo Motor is a rotatory device which can rotate within an accuracy of one degree.
//A servo motor will be made to rotae in 180 degrees using an Arduino Uno

//Code must include Servo.h library in order to make it work

#include <Servo.h>

Servo myservo; //Creates a servo object to control a servo motor
int angle=0;

void setup()
 {
myservo.attach(9); //Attach the Servo on pin no.9 to the Servo Object
 }

void loop()
 {
for(angle=0;angle<180;angle+=1) //Angle rotates from 0 to 180 degrees in steps of 1 degree
 {
myservo.write(angle); //Directs the servo to position itself in the variable 'angle'
delay(20);
}
for(angle=180;angle>=1;angle-=1) //Angle rotates from 180 to 0 degrees in steps of 1 degree
{
myservo.write(angle); //Moves Servo back in opposite direction
delay(20);
}}