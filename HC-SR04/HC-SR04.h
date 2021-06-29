#include "Arduino.h"

class HCSR04{
  public:
    HCSR04(int echoPin,int trigPin);
    showDistance(bool cm);
    
  private:
    byte echoPIN;
	byte trigPIN;
};
