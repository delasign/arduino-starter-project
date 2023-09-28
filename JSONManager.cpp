// MARK: Libraries
#include <SPI.h>
// MARK: Modules
#include <ArduinoJson.h>
#include "JSONManager.h"
#include "Logs.h"
#include "Models.h"
#include "Utilities.h"

// MARK: Constructor
JSONManager::JSONManager() {
  // Initialization code, if needed
}

// MARK: Singleton
// === Required for Singletons ===
// Define the single instance as a static member
JSONManager& JSONManager::shared() {
  static JSONManager instance;
  return instance;
}

// MARK: LifeCycle
void JSONManager::setup() {
  inProgressLog(debugIdentifier, "Setup");
  // Setup your Manager
  // .
  // ..
  // ...
  // Log the end of the setup
  succesfulLog(debugIdentifier, "Setup", "Complete");
}

// MARK: Conversion Functionality
String JSONManager::convertDocToString(DynamicJsonDocument object) {
  inProgressLog(debugIdentifier, "convertSampleStructToJSONString");
  // Convert the JSON document to a string
  String jsonString;
  serializeJson(object, jsonString);

  succesfulLog(debugIdentifier, "convertSampleStructToJSONString", jsonString);
  return jsonString;
}

DynamicJsonDocument JSONManager::convertStringToDoc(String jsonString) {
  inProgressLog(debugIdentifier, "convertSampleStructToJSONString");
  DynamicJsonDocument doc(1024);
  DeserializationError error = deserializeJson(doc, jsonString);
  // Check for parsing errors
  if (error) {
    Serial.print("Parsing failed: ");
    Serial.println(error.c_str());
    DynamicJsonDocument empty(1024);
    return empty;
  }
  succesfulLog(debugIdentifier, "convertSampleStructToJSONString", "Complete");
  return doc;
}

// MARK: Utilities
DynamicJsonDocument JSONManager::convertSampleJSONObjectToDoc(SampleJSONObject object) {
  DynamicJsonDocument doc(1024);
  doc["sampleString"] = object.sampleString;
  doc["sampleInt"] = object.sampleInt;
  doc["sampleBool"] = object.sampleBool;
  return doc;
}

SampleJSONObject JSONManager::convertDocToSampleJSONObject(DynamicJsonDocument doc) {
  inProgressLog(debugIdentifier, "convertSampleStructToJSONString");
  SampleJSONObject object;
  object.sampleString = doc["sampleString"].as<String>();
  object.sampleInt = doc["sampleInt"].as<int>();
  object.sampleBool = doc["sampleBool"].as<bool>();
  succesfulLog(debugIdentifier, "convertSampleStructToJSONString", "Complete");
  return object;
}