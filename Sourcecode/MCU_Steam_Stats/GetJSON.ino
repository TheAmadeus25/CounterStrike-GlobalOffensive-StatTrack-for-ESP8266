/*
  ┌────────────────────────────────────────────────────┐
  │ Counter Strike: Global Offensive Stats for ESP8266 by TheAmadeus25               ┃
  ├────────────────────────────────────────────────────┤
  │ https://theamadeus25.github.io/CounterStrike-GlobalOffensive-StatTrack-for-ESP8266/
  ├────────────────────────────────────────────────────┤
  │ IMPORTANT! If you like it, please share and like it! If you use this in your     ┃
  │ project, please mention me and add the URL to my GitHub page, too.               ┃
  ├────────────────────────────────────────────────────┤
  │ GetJSON(): Connect to API                                                        ┃
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

void GetJSON() {
  String URL = "http://api.steampowered.com/ISteamUserStats/GetUserStatsForGame/v0002/?appid=" APP_ID "&key=" API_KEY "&steamid=" STEAM_ID "&format=json";
  int httpCode;

  // const size_t bufferSize = JSON_ARRAY_SIZE(107) + JSON_ARRAY_SIZE(211) + JSON_OBJECT_SIZE(1) + 318 * JSON_OBJECT_SIZE(2) + JSON_OBJECT_SIZE(4);
  
  http.begin(URL);
  //http.useHTTP10();

  httpCode = http.GET();
  Serial.print("HTTP Code: ");
  Serial.println(httpCode);
  
  ParsingJSON();
  ShowJSON();


/*
  if (root.success()) {
    Serial.print("Succeeded");
  } else {
    Serial.print("Failed");
  }*/
  
  return;
}
