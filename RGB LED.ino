// RGB LEDs are defined as four-terminal device which can produce any colour in the RGB Colour Wheel
// In order to achieve the colour, put PWM outputs to its two input pins to adjust the red, blue and green colour levels.

#define redpin 11  //Declare redpin at pin no.11
#define greenpin 10  //Declare greenpin at pin no.10
#define bluepin 6  //Declare bluepin at pin no.7

void setup()  {

pinMode(redpin,OUTPUT);  //Set the redpin as output
pinMode(greenpin,OUTPUT); //Set the greenpin as output
pinMode(bluepin,OUTPUT); //Set the bluepin as output
 }

void loop()   {

// Considering the brightness of Red light

   analogWrite(redpin,255);
   analogWrite(greenpin,0);
   analogWrite(bluepin,0);
   delay(2000);

//Considering the brightness of Green light

   analogWrite(redpin,0);
   analogWrite(greenpin,255);
   analogWrite(bluepin,0);
   delay(2000);

//Considering the brightness of Blue light

   analogWrite(redpin,0);
   analogWrite(greenpin,0);
   analogWrite(bluepin,255);
   delay(2000);
}