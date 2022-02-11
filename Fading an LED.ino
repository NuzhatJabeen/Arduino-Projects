// Fading an LED
// Gradually increase and decrease the brightness of an LED using PWM

#define LED 3  //Declare LED at pin no.3

void setup() {

pinMode (3, OUTPUT); //Set pin no.3 as output

}

void loop() {

int i;  //Declare i which will store an integer value
for(i=0;i<=255;i++){   //Increasing the brightness of an LED
     analogWrite(3,i);  //Set the analog value of pin no.3 as i
    
      delay(100); //Pause for 100ms
}

for(i=255;i>=0;i--) {  //Decreasing the brightness of an LED
     analogWrite(3,i);  //Set the analog value of pin no.3 as i
    
      delay(100); //Pause for 100ms
}
