//Κώδικας για την δευτερη συνάντηση της σειράς μαθημάτων της KastoriaRobotics
//για το εαρινό εξάμηνο 2015-2016
//Project Arduino Blink


int led = 6;	//σύνδεση του LED στο pin 6
void setup()
{
	pinMode(led,OUTPUT);		//δήλωση πως το pin 6 θα είναι για έξοδο
}

void loop()
{
	digitalWrite(led,HIGH);	
	delay(1000);
	digitalWrite(led,LOW);
	delay(1000);
}
