#include <Arduino.h>

int led = 2;
void setup() 
{
  // put your set
  pinMode(2, OUTPUT);

  
  
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}