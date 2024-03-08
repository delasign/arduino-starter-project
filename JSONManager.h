#ifndef JSON_MANAGER_H
#define JSON_MANAGER_H
// MARK: Libraries
#include <Arduino.h>
#include <ArduinoJson.h>
// Make sure you include the models
#include "Models.h"
// MARK: Class / Functions / Variables
class JSONManager {
public:
  // MARK: Variables
  // === Required for Singletons ===
  static JSONManager& shared();
  // MARK: Lifecycle
  void setup();
  // MARK: Conversion Functionality
  String convertDocToString(JsonDocument object);
  JsonDocument convertStringToDoc(String jsonString);
  // MARK: Utilities
  JsonDocument convertSampleJSONObjectToDoc(SampleJSONObject object);
  SampleJSONObject convertDocToSampleJSONObject(JsonDocument doc);
  
private:
  // MARK: Variables
  // Debuging Identifier
  String debugIdentifier = "[JSON MANAGER] | ";

  // MARK: Singleton
  // === Required for Singletons ===
  // Private constructor to prevent direct instantiation
  JSONManager();

  // Private copy constructor and assignment operator to prevent cloning
  // === Required for Singletons ===
  JSONManager(const JSONManager&) = delete;
  JSONManager& operator=(const JSONManager&) = delete;
};



#endif
