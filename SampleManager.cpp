// MARK: Libraries
#include <SPI.h>
// MARK: Modules
#include "SampleManager.h"
#include "Logs.h"
// MARK: Variables

// MARK: LifeCycle
void SampleManager::setup() {
  inProgressLog(debugIdentifier, "Setup");
  // Setup your Manager
  // .
  // ..
  // ...
  // Log the end of the setup
  succesfullLog(debugIdentifier, "Setup", "Complete");
}
