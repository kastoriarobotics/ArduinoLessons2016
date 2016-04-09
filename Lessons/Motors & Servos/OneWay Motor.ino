/*	Arduino Lessons 2016 by KastoriaRobotics
*	One Way DC motor, rotating a DC motor.
* 	author: Perlat Kociaj
*
*/

int motorPin =  5;    // pin 1 απο τον κινητήρα 

void setup()   
{  
	//δήλωση των pins πως θα είναι για έξοδο
  pinMode(motorPin1, OUTPUT); 	 
}

void loop()                     
{	//μέγιστη ταχύτητα του κινητήρα με αναλογική τιμή 255
 	analogWrite(motorPin,255);
}

 