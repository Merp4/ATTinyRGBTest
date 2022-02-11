#include <Arduino.h>

/*
    This is based on this tutorial: https://www.electroschematics.com/attiny85-pwm-primer-tutorial-using-arduino/

    USB Serial driver: https://github.com/LilyGO/DigiSpark-ATtiny85-driver-install
      Direct download: https://github.com/LilyGO/DigiSpark-ATtiny85-driver-install/raw/master/Digistump.Drivers.zip

    PWM/ADC pins may differ from labelled - see 'Hardware&Software PWM' here http://digistump.com/wiki/digispark/tricks
*/

int redPin = 0;
int greenPin = 1;
int bluePin = 4;

int redValue = 0;
int greenValue = 0;
int blueValue = 255;

void write_PWM()
{
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
  delay(25); // pause for 25 milliseconds
}

void setup()
{
  // put your setup code here, to run once:

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:

  // Do a pretty little loop thing

  // Fade in red
  for (int i = 0; i < 255; i++)
  {
    redValue = i;
    write_PWM();
  }

  // Fade out blue
  for (int i = 255; i > 0; i--)
  {
    blueValue = i;
    write_PWM();
  }

  // Fade in green
  for (int i = 0; i < 255; i++)
  {
    greenValue = i;
    write_PWM();
  }

  // Fade out red
  for (int i = 255; i > 0; i--)
  {
    redValue = i;
    write_PWM();
  }

  // Fade in blue
  for (int i = 0; i < 255; i++)
  {
    blueValue = i;
    write_PWM();
  }

  // Fade out green
  for (int i = 255; i > 0; i--)
  {
    greenValue = i;
    write_PWM();
  }
}