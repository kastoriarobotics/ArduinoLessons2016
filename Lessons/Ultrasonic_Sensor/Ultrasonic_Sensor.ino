#include <Ultrasonic.h> 

Ultrasonic ultrasonic(8,9);
int apostasi;
void setup() {
Serial.begin(9600);
}

void loop()
{
  apostasi = ultrasonic.Ranging(CM);
  Serial.print("Brethike empodio sta : ");
  Serial.print(apostasi);
  Serial.println("  ekatosta");
  delay(100);
}





