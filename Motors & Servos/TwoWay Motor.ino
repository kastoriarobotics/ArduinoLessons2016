/*	Arduino Lessons 2016 by KastoriaRobotics
*	Two Way DC motor, rotating left and right a DC motor.
* 	author: Perlat Kociaj
*
*/

int motorPin1 =  5; 
int motorPin2 =  6;  

void setup()   
{ 
  //δήλωση και των 2 Pin για έξοδο
  pinMode(motorPin1, OUTPUT); 
  pinMode(motorPin2, OUTPUT);  
}

void loop()                     
{
  rotateLeft(255);	//αριστερόστροφη κίνηση με την μέγιστη ταχύτητα
  delay(1000);
  rotateRight(255); //δεξιόστροφη κίνηση με την μέγιστη ταχύτητα
  delay(1000);
}
//συνάρτηση για αριστερόστροφη κίνηση
void rotateLeft(int speedOfRotate)
{
  analogWrite(motorPin1, speedOfRotate); //δίνει ταχύτητα για αριστερόστροφη κινηση
  digitalWrite(motorPin2, LOW);  // θέτει το motorpin2 εκτός λειτουργίας
}
//συνάρτηση για δεξιόστροφη κίνση
void rotateRight(int speedOfRotate)
{
  analogWrite(motorPin2, speedOfRotate); //δίνει ταχύτητα για δεξιόστροφη κινηση
  digitalWrite(motorPin1, LOW);    // θέτει το motorpin1 εκτός λειτουργίας
}
 