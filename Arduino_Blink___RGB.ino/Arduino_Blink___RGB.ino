//Κώδικας για την δευτερη συνάντηση της σειράς μαθημάτων της KastoriaRobotics
//για το εαρινό εξάμηνο 2015-2016
//Project RGB LED


int redPin = 11;  // pin για το R του RGB
int greenPin = 10;  // pin για το G του RGB
int bluePin = 9;  // Pin για το B του RGB 
 
void setup()
{ 
         pinMode(redPin, OUTPUT); //redPin για έξοδο
         pinMode(greenPin, OUTPUT); //greenPin για έξοδο 
         pinMode(bluePin, OUTPUT); //bluePin για έξοδο
}    


void loop()    
{    
  //Βασικά Χρώματα
    color(255,0,0); //Κόκκινο
  delay(1000);  
    color(0,255,0); //Πράσινο
  delay(1000);  
    color(0,0,255); //Μπλέ
} 

//Συνάρτηση με 3 ορίσματα για το χρώμα του LED
void color (int red, int green, int blue) 
{    
  analogWrite(redPin, red);   //δωσε την τιμή του πρώτου ορίσματος για το κόκκινο χρώμα
  analogWrite(bluePin, blue);   //δωσε την τιμή του δεύτερου ορίσματος για το πράσινο χρώμα
  analogWrite(greenPin, green); //δωσε την τιμή του τρίτου ορίσματος για το μπλέ χρώμα
}
 


