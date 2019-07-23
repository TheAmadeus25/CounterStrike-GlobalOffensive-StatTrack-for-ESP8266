/*
  ┌────────────────────────────────────────────────────┐
  │ Counter Strike: Global Offensive Stats for ESP8266 by TheAmadeus25               ┃
  ├────────────────────────────────────────────────────┤
  │ https://theamadeus25.github.io/CounterStrike-GlobalOffensive-StatTrack-for-ESP8266/
  ├────────────────────────────────────────────────────┤
  │ IMPORTANT! If you like it, please share and like it! If you use this in your     ┃
  │ project, please mention me and add the URL to my GitHub page, too.               ┃
  ├────────────────────────────────────────────────────┤
  │ InitWiFi(): Connect to WiFi                                                      ┃
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

void InitWiFi(){
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);

  Serial.print("Connecting Wifi: ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(250);
  }
  
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  IPAddress ip = WiFi.localIP();
  Serial.println(ip);
  delay(100);

  return;
}
