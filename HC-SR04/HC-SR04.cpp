#include "Arduino.h"
#include "HC-SR04.h"

HCSR04::HCSR04(int echoPin,int trigPin){
 echoPIN = echoPin;
 trigPIN = trigPin;
 pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
}

HCSR04::showDistance(bool cm){
  long duration; 
  float distance;
  digitalWrite(trigPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPIN, LOW);
  duration = pulseIn(echoPIN, HIGH);
  distance = duration * 0.034 / 2; 
  if(cm == true){
  	return distance;	
  }
  else{
  	return distance * 0.39370079;
  }
}
