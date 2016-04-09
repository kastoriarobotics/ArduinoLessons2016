

int flexSensorPin = A0; // pin για να διαβάσει 
void setup()
{
 Serial.begin(9600); 
}
 void loop()
 {
  int flexSensorReading = analogRead(flexSensorPin);  //μεταβλητή οπου εκχωρείται η τιμή που διαβάζει απο το Flex
  Serial.println(flexSensorReading);  //εκτύπωση της τιμής που διαβάστηκε
  delay(250); 
} 



//---------------------------------------------------------------------------------------------------------------------------

void flex0to100(){
  int flex0to100 = map(flexSensorReading, 512, 614, 0, 100);
  Serial.println(flex0to100);
  
}
