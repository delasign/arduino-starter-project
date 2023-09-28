#ifndef UTILITIES_H
#define UTILITIES_H
// MARK: Libraries
#include <Arduino.h>
#include <SPI.h>
// MARK: Functions
String combineStringAndCharacterArray(String A, char B[]);
char* stringToCharArray(String str);
String charArrayToString(char* charArray);
#endif

