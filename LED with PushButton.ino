// Turning ON an LED using a Pushbutton
// Here, a pushbutton is used as a switch
// When the pushbutton is pressed, the LED will switch on

#define LED 11  //Declare LED at pin no.11
#defime BUTTON 10  //Declare BUTTON at pin no.10

void setup() {

pinMode(10, INPUT);  //Set pin no.10 as input
pinMode(11, OUTPUT);  //Set pin no.11 as output

}

void loop()  {

if(digitalRead(10)==HIGH) {  //If the BUTTON is pressed

digitalWrite(LED,HIGH);  //LED is switched ON

}