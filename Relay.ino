//Relays are devices which can be used to control high voltage switching.
//Here we will power and control four LED's indirectly through a 4-Relay Module

#define RELAY1  7  //Declare pin no.7 of the Arduino for the 4 relay module
#define RELAY2  6  //Declare pin no.6 of the Arduino for the 4 relay module
#define RELAY3  5  //Declare pin no.5 of the Arduino for the 4 relay module
#define RELAY4  4  //Declare pin no.4 of the Arduino for the 4 relay module

void setup() 
 {
pinMode(RELAY1,OUTPUT); //Declare Relay1 as output
pinMode(RELAY2,OUTPUT); //Declare Relay2 as output
pinMode(RELAY3,OUTPUT); //Declare Relay3 as output
pinMode(RELAY4,OUTPUT); //Declare Relay4 as output
}

void loop()
 }
digitalWrite(RELAY1,LOW); //This will turn ON Relay1
delay(5000); //Wait for 5 seconds
digitalWrite(RELAY1,HIGH); //This will turn OFF Relay1

digitalWrite(RELAY2,LOW); //This will turn ON Relay2
 delay(5000); //Wait for 5 seconds
 digitalWrite(RELAY2,HIGH); //This will turn OFF Relay2

digitalWrite(RELAY3,LOW); //This will turn ON Relay3
 delay(5000); //Wait for 5 seconds
 digitalWrite(RELAY3,HIGH); //This will turn OFF Relay3

digitalWrite(RELAY4,LOW); //This will turn ON Relay4
 delay(5000); //Wait for 5 seconds
 digitalWrite(RELAY4,HIGH); //This will turn OFF Relay2
  }




