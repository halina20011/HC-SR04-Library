/*#################################################################################
 * This library was produced by Halina
 * 
 *  github: https://github.com/halina20011/HC-SR04-Libraries
###################################################################################*/
#include <HC-SR04.h>

#define echoPin 2
#define trigPin 3

HCSR04 HC = HCSR04(echoPin, trigPin);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(HC.showDistance(true));
  Serial.println(" cm");
  Serial.print(HC.showDistance(false));
  Serial.println(" inch");
  delay(1000);
}
