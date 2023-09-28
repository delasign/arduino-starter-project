#ifndef SAMPLE_MANAGER_H
#define SAMPLE_MANAGER_H
// MARK: Libraries
#include <Arduino.h>
// MARK: Class / Functions / Variables
class SampleManager {
public:
  // MARK: Variables
  // === Required for Singletons ===
  static SampleManager& shared();
  // MARK: Lifecycle
  void setup();
private:
  // MARK: Variables
  // Debuging Identifier
  String debugIdentifier = "[SAMPLE MANAGER] | ";

  // MARK: Singleton
  // === Required for Singletons ===
  // Private constructor to prevent direct instantiation
  SampleManager();

  // Private copy constructor and assignment operator to prevent cloning
  // === Required for Singletons ===
  SampleManager(const SampleManager&) = delete;
  SampleManager& operator=(const SampleManager&) = delete;
};



#endif
