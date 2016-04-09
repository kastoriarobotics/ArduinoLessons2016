/*	Arduino Lessons 2016 by KastoriaRobotics
*	Servo Motor
* 	author: Perlat Kociaj
*
*/

#include <Servo.h>	//χρησιμοποιούμε την βιβλιοθήκης Servo.h

Servo servo;	//δήλωση αντικειμένου Servo με το όνομα servo

void setup()
{
	servo.attach(A0);
}

void loop()
{
	servo.write(0);		// μηδέν μοίρες στον κινητήρα
	delay(1000);		//καθυστέρηση 1 δευτερόλεπτο
	servo.write(180);	//180 μοίρες στον κινητήρα
}
