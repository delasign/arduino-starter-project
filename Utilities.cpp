// MARK: Libraries
#include <Arduino.h>
#include <SPI.h>
// MARK: Modules
#include "Utilities.h"

// MARK: Functions
String combineStringAndCharacterArray(String A, char B[]) {
  // Calculate the length of the resulting string
  int resultLength = A.length() + strlen(B) + 1; // +1 for the null terminator

  // Create a character array to hold the combined string
  char combinedString[resultLength];

  // Copy the first string into the combined string
  strcpy(combinedString, A.c_str());

  // Concatenate the second string onto the combined string
  strcat(combinedString, B);

  // Convert the combined character array to a String object
  return String(combinedString);
}

char* stringToCharArray(String str) {
  // Allocate memory for a new character array
  char* charArray = new char[str.length() + 1]; // +1 for null terminator
  
  // Copy the content of the String into the character array
  strcpy(charArray, str.c_str());
  
  return charArray;
}

String charArrayToString(char* charArray) {
  String result;
  result.concat(charArray);
  return result;
}