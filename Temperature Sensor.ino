//Temperature Sensor is a device which can detect the amount of hotness/coolness in the surroundings

void setup()   {

Serial.begin(9600); //Open USB Port

}

void loop()   {

float temp=0; //Declaring the float variable temp and initializing it with a value 0

temp= (5.0 * analogRead(0) * 100.0) /1024;  //Equation which will be used to convert analog reading into actual temperature


Serial.println(temp);  //Display the temperature to Serial Monitor

 }
 