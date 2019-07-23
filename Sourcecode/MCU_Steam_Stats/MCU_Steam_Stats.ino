/*
  ┌────────────────────────────────────────────────────┐
  │ Counter Strike: Global Offensive Stats for ESP8266 by TheAmadeus25               ┃
  ├────────────────────────────────────────────────────┤
  │ https://theamadeus25.github.io/CounterStrike-GlobalOffensive-StatTrack-for-ESP8266/
  ├────────────────────────────────────────────────────┤
  │ IMPORTANT! If you like it, please share and like it! If you use this in your     ┃
  │ project, please mention me and add the URL to my GitHub page, too.               ┃
  ├────────────────────────────────────────────────────┤
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  │                                                                                  ┃
  ├──────────────────────────┬─────────────────────────┤
  │ Version: 0.1.0 - BETA                     Date: 23.Jul.2019                      ┃
  ├──────────────────────────┴─────────────────────────┤
  │                                                                                  ┃
  │                                                                                  ┃
  └────────────────────────────────────────────────────┘
*/

#include "A_Configuration.h"                  // True global configuration
#include "A_Variable.h"                       // True global variable

#include <ESP8266WiFi.h>                      // Library
#include <ESP8266HTTPClient.h>                // Library
#include <WiFiClientSecure.h>                 // Library
#include <ArduinoJson.h>                      // Library
#include <Time.h>                             // Library

HTTPClient http;                              // Creating Object
WiFiClient client;                            // Creating Object

void setup() {
  Serial.begin(115200);                       // Set Serialport Baudrate
  InitWiFi();                                 // @WiFi      | Initalization of WiFi
}

void loop() {
  GetJSON();                                  // @GetJSON   | Connect to API
  
  delay(1000000000);                          // YOLO value. I didn't think about the refresh time
}
