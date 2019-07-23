/*
  ┌────────────────────────────────────────────────────┐
  │ Counter Strike: Global Offensive Stats for ESP8266 by TheAmadeus25               ┃
  ├────────────────────────────────────────────────────┤
  │ https://theamadeus25.github.io/            /                                     ┃
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

#ifndef A_Configuration_h
#define A_Configuration_h

char ssid[]     = "******";                               // your network SSID (name)
char password[] = "******";                               // your network key

#define API_KEY   "******"                                // your steam apps API Token
#define STEAM_ID  "******"                                // your steam profil ID 64      // Paste your Steam profil URL (e.g. 8763947230472) here https://steamidfinder.com/
#define APP_ID    "730"                                   // App ID of CS:GO (not implemented; other Valve Game can work, too, w/ same JSON but different var. E.g. L4D, CS:S, TF2,...)

int api_refresh = 60000;                                  // Refresh your stats. Not included, yet.
long api_lasttime;                                        // Last refresh. Not included, yet.

#endif
