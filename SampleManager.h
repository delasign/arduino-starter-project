#ifndef SAMPLE_MANAGER_H
#define SAMPLE_MANAGER_H
// MARK: Libraries
#include <Arduino.h>
// MARK: Class / Functions / Variables
class SampleManager {
public:
  // MARK: Lifecycle
  void setup();
private:
  // MARK: Variables
  // Debuging Identifier
  String debugIdentifier = "[SAMPLE MANAGER] | ";
};



#endif
