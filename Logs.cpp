// MARK: Libraries
#include <Arduino.h>
#include <SPI.h>
// MARK: Modules
#include "Logs.h"

// MARK: Functions
void inProgressLog(String identifier, String function) {
  Serial.println( identifier + "⚈ ⚈ ⚈ " +  function + " ⚈ ⚈ ⚈.");
};

void inProgressLog(String identifier, String function, String process) {
  Serial.println( identifier + "⚈ ⚈ ⚈ " +  function + " | " + process + ". ⚈ ⚈ ⚈");
};

void succesfullLog(String identifier, String function, String msg) {
  Serial.println( identifier + "✅ " +  function + " | " + msg + ".");
};

void failedLog(String identifier, String function, String msg) {
  Serial.println( identifier + "❌ " +  function + " | " + msg + ".");
};