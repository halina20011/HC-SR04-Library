/*#################################################################################
 * This library was produced by Halina
 * 
 *  github: https://github.com/halina20011/HC-SR04-Libraries
###################################################################################*/
#include "Arduino.h"

class HCSR04{
  public:
    HCSR04(int echoPin,int trigPin);
    showDistance(bool cm);
    
  private:
    byte echoPIN;
	byte trigPIN;
};
