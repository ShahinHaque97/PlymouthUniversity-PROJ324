
#include <SoftwareSerial.h>
SoftwareSerial softSerial(0, 1);

void setup()  
{
  softSerial.begin(57600);
} 
void loop()  
{ 
  softSerial.write("UART Communication \n");
  delay (100);
}
