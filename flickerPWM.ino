#include <SoftPWM.h>
#include <SoftPWM_timer.h>

long randNumber;

void setup()
{
  // Initialize
  SoftPWMBegin();

  // Create and set pins to 0 (off)
  SoftPWMSet(13, 0);
  SoftPWMSet(11, 0);
  SoftPWMSet(9, 0);
  SoftPWMSet(7, 0);
  SoftPWMSet(5, 0);
  
  // Seed the random number generator
  randomSeed(analogRead(0));
}

void loop()
{
  for (int i = 5; i < 14; i++)
  {
    setFlicker(i);
  }
  delay(50);
}

void setFlicker(int pin)
{
  randNumber = random(90);
  SoftPWMSetPercent(pin, randNumber+10);
} 
