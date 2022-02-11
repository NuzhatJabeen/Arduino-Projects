// Blinking an LED
//Turn "ON" and "OFF" an LED for 1 second

#define LED 11  //Declare LED at pin no.11


void setup() {

pinMode(11,OUTPUT); //Set pin no.11 as output

}

void loop() {

digitalWrite(11,HIGH);  //Switch "ON" the LED
delay(1000);  //Pause for 1 second
digitalWrite(11,LOW);  //Switch "OFF" the LED
delay(1000);  //Pause for 1 second

}
