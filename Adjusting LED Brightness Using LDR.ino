// Adjusting the brightness of an LED using LDR
// This experiment is done using PWM according to an analog input of an LDR Light Sensor

#define LED 11 //Declare LED at pin no.11

void setup() {

pinMode(11,OUTPUT); //Analog pins are automatically set to input
 }

void loop()   {

int value=analogRead(0);  //Reads the output of an LDR

analogWrite(11,value/4);  //Divide the input value of the LDR by 4 and set the brightness of the LED accordingly



}