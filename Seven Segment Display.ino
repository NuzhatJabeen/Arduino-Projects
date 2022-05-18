// Code for Seven Segment display(0-9 Counter) using  Arduino Uno
#define  segA  2  //Connecting Segment A to PIN 2
#define  segB  3  //Connecting Segment B to PIN 3
#define  segC  4  //Connecting Segment C to PIN 4
#define  segD  5  //Connecting Segment D to PIN 5
#define  segE 6  //Connecting Segment E to PIN 6
#define  segF 7  //Connecting Segment F to PIN 7
#define  segG  8  //Connecting Segment G to PIN 8

int count=0; //Increment the count integer for the numbers 0-9
void setup()
{
  for(int i=2;i<9;i++)
       {
          pinMode(i, OUTPUT); // Taking all the pins from 2-8 as output
        }
}

void loop()
{
switch (COUNT)
                              {
                             case 0: // When count value shows 0 on the display
                             digitalWrite(segA, HIGH);
	           digitalWrite(segB, HIGH);
                             digitalWrite(segC, HIGH);
                             digitalWrite(segD, HIGH);
                             digitalWrite(segE, HIGH);
                             digitalWrite(segF, HIGH);
                             digitalWrite(segG, LOW);
                             break;

                             case 1: // When count value shows 1 on the display
                             digitalWrite(segA, LOW);
	           digitalWrite(segB, HIGH);
                             digitalWrite(segC, HIGH);
                             digitalWrite(segD, LOW);
                             digitalWrite(segE, LOW);
                             digitalWrite(segF, LOW);
                             digitalWrite(segG, LOW);
                             break;

	          case 2: // When count value shows 2 on the display
                            digitalWrite(segA,HIGH);
	          digitalWrite(segB, HIGH);
                            digitalWrite(segC,LOW);
                            digitalWrite(segD, HIGH);
                            digitalWrite(segE, HIGH);
                            digitalWrite(segF, LOW);
                            digitalWrite(segG, HIGH);
                            break;

	          case 3: // When count value shows 3 on the display
                            digitalWrite(segA,HIGH);
	          digitalWrite(segB, HIGH);
                            digitalWrite(segC,HIGH);
                            digitalWrite(segD, HIGH);
                            digitalWrite(segE, LOW);
                            digitalWrite(segF, LOW);
                            digitalWrite(segG, HIGH);
                            break;

	         case 4: // When count value shows 4 on the display
                           digitalWrite(segA, LOW);
	         digitalWrite(segB, HIGH);
                           digitalWrite(segC,HIGH);
                           digitalWrite(segD, LOW);
                           digitalWrite(segE, LOW);
                           digitalWrite(segF, HIGH);
                           digitalWrite(segG, HIGH);
                           break;

                           case 5: // When count value shows 5 on the display
                           digitalWrite(segA,HIGH);
	         digitalWrite(segB, LOW);
                           digitalWrite(segC,HIGH);
                           digitalWrite(segD, HIGH);
                           digitalWrite(segE, LOW);
                           digitalWrite(segF, HIGH);
                           digitalWrite(segG, HIGH);
                           break;

                           case 6: // When count value shows 6 on the display
                           digitalWrite(segA,HIGH);
	         digitalWrite(segB, LOW);
                           digitalWrite(segC,HIGH);
                           digitalWrite(segD, HIGH);
                           digitalWrite(segE, HIGH);
                           digitalWrite(segF, HIGH);
                           digitalWrite(segG, HIGH);
                           break;

	         case 7: // When count value shows 7 on the display
                           digitalWrite(segA,HIGH);
	         digitalWrite(segB,HIGH);
                           digitalWrite(segC,HIGH);
                           digitalWrite(segD, LOW);
                           digitalWrite(segE, LOW);
                           digitalWrite(segF, LOW);
                           digitalWrite(segG, LOW);
                           break;

	        
	         case 8: // When count value shows 8 on the display
                           digitalWrite(segA,HIGH);
	         digitalWrite(segB,HIGH);
                           digitalWrite(segC,HIGH);
                           digitalWrite(segD, HIGH);
                           digitalWrite(segE, HIGH);
                           digitalWrite(segF, HIGH);
                           digitalWrite(segG, HIGH);
                           break;

	         case 9: // When count value shows 9 on the display
                           digitalWrite(segA,HIGH);
	         digitalWrite(segB,HIGH);
                           digitalWrite(segC,HIGH);
                           digitalWrite(segD, HIGH);
                           digitalWrite(segE, LOW);
                           digitalWrite(segF, HIGH);
                           digitalWrite(segG, HIGH);
                           break;
	         
	        break;	
	        }
	        if  (COUNT<10)
	       {
	          COUNT++;
                            delay(1000);  // Increment the counter integer for every second
                        }
                        if (COUNT==10)
	     {
	         COUNT=0;  // If the count integer value becomes 10, then reset it to 0
                              delay(1000);
                      }

	
	        



 
 






