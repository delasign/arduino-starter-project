// MARK: Libraries
#include <SPI.h>
// MARK: Modules
#include "SampleManager.h"
#include "Logs.h"
// MARK: Variables


// MARK: Constructor
SampleManager::SampleManager() {
  // Initialization code, if needed
}

// MARK: Singleton
// === Required for Singletons ===
// Define the single instance as a static member
SampleManager& SampleManager::shared() {
  static SampleManager instance;
  return instance;
}

// MARK: LifeCycle
void SampleManager::setup() {
  inProgressLog(debugIdentifier, "Setup");
  // Setup your Manager
  // .
  // ..
  // ...
  // Log the end of the setup
  succesfulLog(debugIdentifier, "Setup", "Complete");
}
