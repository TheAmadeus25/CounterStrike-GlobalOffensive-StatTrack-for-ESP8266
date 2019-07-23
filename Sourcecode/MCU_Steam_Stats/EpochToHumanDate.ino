/*
  ┌────────────────────────────────────────────────────┐
  │ Counter Strike: Global Offensive Stats for ESP8266 by TheAmadeus25               ┃
  ├────────────────────────────────────────────────────┤
  │ https://theamadeus25.github.io/CounterStrike-GlobalOffensive-StatTrack-for-ESP8266/
  ├────────────────────────────────────────────────────┤
  │ IMPORTANT! If you like it, please share and like it! If you use this in your     ┃
  │ project, please mention me and add the URL to my GitHub page, too.               ┃
  ├────────────────────────────────────────────────────┤
  │ EpochConvert(): Convert Epoch to YYYY.MM.DD HH:MM.ss. Not in use                 ┃
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

// Source: https://www.epochconverter.com/programming/c

void EpochConvert(){
  time_t now;
  struct tm ts;
  char buf[80];

  time(&now);

  ts = *localtime(&now);
  strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S %Z", &ts);
  printf("%s\n", buf);
  
  return;
}
