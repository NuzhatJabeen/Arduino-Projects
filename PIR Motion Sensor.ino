// PIR Sensor detector

int ledPin = 13; // Place the led at pin 13
int inputPin = 2; // Choose the input pin for PIR Sensor
int pirState = LOW; //Assume that no motion is detected
int var = 0; //Variable for reaching the pin status

void setup()
{
pinMode(ledPin, OUTPUT); //declare the led as output
pinMode(inputPin, INPUT); //declare the sensor as input

Serial.begin(9600);
}

void loop()
{
var = digitalRead(inputPin); //Read  the input value

if(var==HIGH) //Check whether the input is HIGH
  {  
digitalWrite(ledPin, HIGH); //Turn ON the led 

if (pirState==LOW)
    { 
Serial.println("Motion is detected!"); //Print the output change, not state

pirState= HIGH;
}
} else {

digitalWrite(ledPin, LOW); //Turn OFF the led
if (pirState == HIGH) {
Serial.println("Motion has ended!"); //Print the output change, not state
pirState = LOW;
}
}
}

  