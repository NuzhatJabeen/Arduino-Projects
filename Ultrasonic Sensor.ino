//Ultrasonic Sensors are devices which generates or sense ultrasound energy
//In this experiment, Ultrasonic Sensor will be used to measure distance of the ultrasound

#define echoPin 11  //Declare Echo Pin at pin no.11
#define trigPin 12  //Declare Trigger Pin at pin no.12

long duration;  //Durations are used to calculate distance
long distance; 

void setup()   {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);  //Set the Trigger Pin as output
  pinMode(echoPin,INPUT);  //Set the Echo Pin as Input
}

void loop()   {
   
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);  //Pause for 2 microsecond

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);  //Pause for 10 microsecond

  digitalWrite(trigPin, LOW);
  duration= pulseIn(echoPin,HIGH);

//Calculate the distance in centimeters based on the speed of sound
 distance=duration/58.2;

Serial.println(distance);  //Display the distance on a Serial Monitor

    delay(50);

}



