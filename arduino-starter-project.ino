/*
    The hardware (YEAR) that is used in tandem with this prototype is:
    1. Please list a hardware item.
    2. Please list a hardware item.
    3. Please list a hardware item.
    4. 2Please list a hardware item.

    The items above were put together on a breadboard.
    The images and costs of the order that was made for these part should be a part of this repository.
*/

/*
  *** Setup Instructions ***
  Follow the tutorial linked below:
  ENTER THE LINK FOR THE TUTORIAL THAT SHOWS HOW TO MAKE THIS WORK.

  SUGGESTION: If the board doesn't show up, make sure you setup the Arduino IDE to work with Adafruit:
  https://learn.adafruit.com/adafruit-arduino-ide-setup/overview
*/

/*
  *** Install Code Instructions ***
  1. Setup the IDE
  2. INSERT INSTRUCTION FOR BOARD
  3. INSERT INSTRUCTION FOR PROGRAMMER
  4. INSERT NEXT STEP
  5. INSERT NEXT STEP
  6. INSERT NEXT STEP
*/

/*
  *** Update Code Instructions ***
  1. INSERT INSTRUCTION FOR BOARD
  2. INSERT INSTRUCTION FOR PORT
  3. INSERT INSTRUCTION FOR PROGRAMMER
  4. INSERT NEXT STEP
  5. INSERT NEXT STEP
  6. INSERT NEXT STEP

  THEN
  6. Upload Sketch.
*/

// Script
#include <SPI.h>
#include "sample.h"

void setup(void)
{
  // Set the data rate in bits per second (baud) for serial data transmission.
  Serial.begin(9600);
  // Log the initial setup.
  Serial.println("--- SETUP ---");
}

void loop()
{
  // Hello World in the loop.
  helloWorld();
}