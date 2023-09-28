#ifndef LOGS_H
#define LOGS_H
// MARK: Libraries
#include <Arduino.h>
#include <SPI.h>
// MARK: Functions
void inProgressLog(String identifier, String msg);
void inProgressLog(String identifier, String function, String process);
void succesfullLog(String identifier, String function, String msg);
void failedLog(String identifier, String function, String msg);
#endif