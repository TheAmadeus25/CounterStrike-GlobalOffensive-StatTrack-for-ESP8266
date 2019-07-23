/*
  ┌────────────────────────────────────────────────────┐
  │ Counter Strike: Global Offensive Stats for ESP8266 by TheAmadeus25               ┃
  ├────────────────────────────────────────────────────┤
  │ https://theamadeus25.github.io/            /                                     ┃
  ├────────────────────────────────────────────────────┤
  │ IMPORTANT! If you like it, please share and like it! If you use this in your     ┃
  │ project, please mention me and add the URL to my GitHub page, too.               ┃
  ├────────────────────────────────────────────────────┤
  │ AverageSymbol(): Compare two different Value in %                                ┃
  │ ShowJSON()     : Print all value to Serialport                                   ┃
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

void AverageSymbol(unsigned long CompAA, unsigned long CompAB, unsigned long CompBA, unsigned long CompBB) {
  float TempA, TempB;
  
  TempA = ((float)CompAA / (float)CompAB) * 100;
  TempB = ((float)CompBA / (float)CompBB) * 100;

  if(TempA > TempB) {
    Serial.println("▲");                                  // Print over-average // E.g. Is your accuracy of this weapon higher, same or lower than the overall accuracy of all weapons.
  } else if(TempA == TempB) {
    Serial.println("●");                                  // Print same-average
  }else{
    Serial.println("▼");                                  // Print under-average
  }
  
  return;
}

void ShowJSON() {
  Serial.println();
  Serial.println("Counter-Strike: Global Offensive Stat-Tracker");
  Serial.println("---------------------------------------------------------------------------------------");
  
  
  
  
  Serial.print("Kills                      : ");
  Serial.println(Stats.kills);
  Serial.print("Deaths                     : ");
  Serial.println(Stats.deaths);
  Serial.print("Time Played                : ");
  Serial.println(Stats.time_played);
  Serial.print("Planted Bombs              : ");
  Serial.println(Stats.planted_bombs);
  Serial.print("Defused Bombs              : ");
  Serial.println(Stats.defused_bombs);
  Serial.print("Wins                       : ");
  Serial.println(Stats.wins);
  Serial.print("Damage done                : ");
  Serial.println(Stats.damage_done);
  Serial.print("Money earned               : ");
  Serial.print(Stats.money_earned);
  Serial.println("$");
  Serial.print("Rescued Hostages           : ");
  Serial.println(Stats.rescued_hostages);
//---
  Serial.print("Headshot                   : ");
  Serial.println(Kills.headshot);
  Serial.print("Enemy Weapon               : ");
  Serial.println(Kills.enemy_weapon);
  Serial.print("Pistol round               : ");
  Serial.println(Kills.pistolround);
  
  Serial.print("Weapons donated            : ");
  Serial.println(Match.weapons_donated);
  Serial.print("Broken windows             : ");
  Serial.println(Match.broken_windows);
  Serial.print("Knife fight                : ");
  Serial.println(Match.knife_fight);
  Serial.print("Kills blinded              : ");
  Serial.println(Match.kills_enemy_blinded);
  Serial.print("Kills against zoomed sniper: ");
  Serial.println(Match.kills_against_zoomed_sniper);
  Serial.print("Dominations                : ");
  Serial.println(Match.dominations);
  Serial.print("Domination overkills       : ");
  Serial.println(Match.domination_overkills);
  Serial.print("Revenges                   : ");
  Serial.println(Match.revenges);
  Serial.print("Rounds played              : ");
  Serial.println(Match.rounds_played);
  Serial.print("Won                        : ");
  Serial.println(Match.won);
  Serial.print("Played                     : ");
  Serial.println(Match.played);
  Serial.print("Gun Game won               : ");
  Serial.println(Match.gg_won);
  Serial.print("Gun Game played            : ");
  Serial.println(Match.gg_played);
  Serial.print("Progressive won            : ");
  Serial.println(Match.progressive_won);
  Serial.print("Terrorist bomb won         : ");
  Serial.println(Match.trbomb_won);
  Serial.print("Contribution score         : ");
  Serial.println(Match.contribution_score);

  Serial.println("\n\nLast Match - Casual");
  Serial.println("---------------------------------------------------------------------------------------");
  Serial.println("\t\t\tCT\t:\tT\t\t\t");
  Serial.print("\t\t\t"); Serial.print(Last_Match.ct_wins); Serial.print("\t:\t");  Serial.println(Last_Match.t_wins);
  Serial.println();
  Serial.println("\t\tKill\tDeath\tMVP\tScore\tSpend");
  Serial.print("\t\t"); Serial.print(Last_Match.kills); Serial.print("\t"); Serial.print(Last_Match.deaths); Serial.print("\t");  Serial.print(Last_Match.mvps);  Serial.print("\t"); Serial.print(Last_Match.contribution_score);  Serial.print("\t");  Serial.print(Last_Match.money_spent);  Serial.println("$");



  
  //Serial.print("K | D\t\t\t");                  Serial.print(Last_Match.kills);         Serial.print("\t|\t");  Serial.println(Last_Match.deaths);
  Serial.println();



  
  //Serial.print("Wins\t\t\t\t");                 Serial.println(Last_Match.wins);
  Serial.print("Max players\t\t\t");            Serial.println(Last_Match.max_players);
  //Serial.print("K/D\t\t\t\t");                  Serial.print(Last_Match.kills);         Serial.print(" | ");  Serial.println(Last_Match.deaths);
  //Serial.print("MVP\t\t\t\t");                  Serial.println(Last_Match.mvps);
  Serial.print("Damage\t\t\t\t");               Serial.println(Last_Match.damage);
  //Serial.print("Money spent\t\t\t");            Serial.println(Last_Match.money_spent);
  Serial.print("Dominations\t\t\t");            Serial.println(Last_Match.dominations);
  Serial.print("Revenges\t\t\t");               Serial.println(Last_Match.revenges);
  //Serial.print("contribution_score\t\t");       Serial.println(Last_Match.contribution_score);
  Serial.print("Rounds\t\t\t\t");               Serial.println(Last_Match.rounds);
  Serial.print("GunGame contribution score\t"); Serial.println(Last_Match.gg_contribution_score);
  
  
  
  
  

  
  Serial.println("\n\nWeapons Statistics");
  Serial.println("---------------------------------------------------------------------------------------");
  Serial.println("Name\t\tKill\t\tHits\t\tShots\t\tAccuracy\tAverage\n");
  
  Serial.print("Deagle\t\t");   Serial.print(Weapon_Kill.deagle);     Serial.print("\t\t"); Serial.print(Hits.deagle);    Serial.print("\t\t"); Serial.print(Shots.deagle);     Serial.print("\t\t"); Serial.print( ((float)Hits.deagle / (float)Shots.deagle)*100 );         Serial.print("%\t\t");  AverageSymbol(Hits.deagle, Shots.deagle, Match.shots_hit, Match.shots_fired);  
  Serial.print("Glock\t\t");    Serial.print(Weapon_Kill.glock);      Serial.print("\t\t"); Serial.print(Hits.glock);     Serial.print("\t\t"); Serial.print(Shots.glock);      Serial.print("\t\t"); Serial.print( ((float)Hits.glock  / (float)Shots.glock)*100 );          Serial.print("%\t\t");  AverageSymbol(Hits.glock, Shots.glock, Match.shots_hit, Match.shots_fired);
  Serial.print("Elite\t\t");    Serial.print(Weapon_Kill.elite);      Serial.print("\t\t"); Serial.print(Hits.elite);     Serial.print("\t\t"); Serial.print(Shots.elite);      Serial.print("\t\t"); Serial.print( ((float)Hits.elite  / (float)Shots.elite)*100 );          Serial.print("%\t\t");  AverageSymbol(Hits.elite, Shots.elite, Match.shots_hit, Match.shots_fired);
  Serial.print("FiveSeven\t");  Serial.print(Weapon_Kill.fiveseven);  Serial.print("\t\t"); Serial.print(Hits.fiveseven); Serial.print("\t\t"); Serial.print(Shots.fiveseven);  Serial.print("\t\t"); Serial.print( ((float)Hits.fiveseven  / (float)Shots.fiveseven)*100 );  Serial.print("%\t\t");  AverageSymbol(Hits.fiveseven, Shots.fiveseven, Match.shots_hit, Match.shots_fired);
  Serial.print("AWP\t\t");      Serial.print(Weapon_Kill.awp);        Serial.print("\t\t"); Serial.print(Hits.awp);       Serial.print("\t\t"); Serial.print(Shots.awp);        Serial.print("\t\t"); Serial.print( ((float)Hits.awp  / (float)Shots.awp)*100 );              Serial.print("%\t\t");  AverageSymbol(Hits.awp, Shots.awp, Match.shots_hit, Match.shots_fired);
  Serial.print("AK47\t\t");     Serial.print(Weapon_Kill.ak47);       Serial.print("\t\t"); Serial.print(Hits.ak47);      Serial.print("\t\t"); Serial.print(Shots.ak47);       Serial.print("\t\t"); Serial.print( ((float)Hits.ak47  / (float)Shots.ak47)*100 );            Serial.print("%\t\t");  AverageSymbol(Hits.ak47, Shots.ak47, Match.shots_hit, Match.shots_fired);
  Serial.print("AUG\t\t");      Serial.print(Weapon_Kill.aug);        Serial.print("\t\t"); Serial.print(Hits.aug);       Serial.print("\t\t"); Serial.print(Shots.aug);        Serial.print("\t\t"); Serial.print( ((float)Hits.aug  / (float)Shots.aug)*100 );              Serial.print("%\t\t");  AverageSymbol(Hits.aug, Shots.aug, Match.shots_hit, Match.shots_fired);
  Serial.print("Famas\t\t");    Serial.print(Weapon_Kill.famas);      Serial.print("\t\t"); Serial.print(Hits.famas);     Serial.print("\t\t"); Serial.print(Shots.famas);      Serial.print("\t\t"); Serial.print( ((float)Hits.famas  / (float)Shots.famas)*100 );          Serial.print("%\t\t");  AverageSymbol(Hits.famas, Shots.famas, Match.shots_hit, Match.shots_fired);
  Serial.print("G3SG1\t\t");    Serial.print(Weapon_Kill.g3sg1);      Serial.print("\t\t"); Serial.print(Hits.g3sg1);     Serial.print("\t\t"); Serial.print(Shots.g3sg1);      Serial.print("\t\t"); Serial.print( ((float)Hits.g3sg1  / (float)Shots.g3sg1)*100 );          Serial.print("%\t\t");  AverageSymbol(Hits.g3sg1, Shots.g3sg1, Match.shots_hit, Match.shots_fired);
  Serial.print("P90\t\t");      Serial.print(Weapon_Kill.p90);        Serial.print("\t\t"); Serial.print(Hits.p90);       Serial.print("\t\t"); Serial.print(Shots.p90);        Serial.print("\t\t"); Serial.print( ((float)Hits.p90  / (float)Shots.p90)*100 );              Serial.print("%\t\t");  AverageSymbol(Hits.p90, Shots.p90, Match.shots_hit, Match.shots_fired);
  Serial.print("MAC10\t\t");    Serial.print(Weapon_Kill.mac10);      Serial.print("\t\t"); Serial.print(Hits.mac10);     Serial.print("\t\t"); Serial.print(Shots.mac10);      Serial.print("\t\t"); Serial.print( ((float)Hits.mac10  / (float)Shots.mac10)*100 );          Serial.print("%\t\t");  AverageSymbol(Hits.mac10, Shots.mac10, Match.shots_hit, Match.shots_fired);
  Serial.print("UMP45\t\t");    Serial.print(Weapon_Kill.ump45);      Serial.print("\t\t"); Serial.print(Hits.ump45);     Serial.print("\t\t"); Serial.print(Shots.ump45);      Serial.print("\t\t"); Serial.print( ((float)Hits.ump45  / (float)Shots.ump45)*100 );          Serial.print("%\t\t");  AverageSymbol(Hits.ump45, Shots.ump45, Match.shots_hit, Match.shots_fired);
  Serial.print("XM1014\t\t");   Serial.print(Weapon_Kill.xm1014);     Serial.print("\t\t"); Serial.print(Hits.xm1014);    Serial.print("\t\t"); Serial.print(Shots.xm1014);     Serial.print("\t\t"); Serial.print( ((float)Hits.xm1014  / (float)Shots.xm1014)*100 );        Serial.print("%\t\t");  AverageSymbol(Hits.xm1014, Shots.xm1014, Match.shots_hit, Match.shots_fired);
  Serial.print("M249\t\t");     Serial.print(Weapon_Kill.m249);       Serial.print("\t\t"); Serial.print(Hits.m249);      Serial.print("\t\t"); Serial.print(Shots.m249);       Serial.print("\t\t"); Serial.print( ((float)Hits.m249  / (float)Shots.m249)*100 );            Serial.print("%\t\t");  AverageSymbol(Hits.m249, Shots.m249, Match.shots_hit, Match.shots_fired);
  Serial.print("HKP2000\t\t");  Serial.print(Weapon_Kill.hkp2000);    Serial.print("\t\t"); Serial.print(Hits.hkp2000);   Serial.print("\t\t"); Serial.print(Shots.hkp2000);    Serial.print("\t\t"); Serial.print( ((float)Hits.hkp2000  / (float)Shots.hkp2000)*100 );      Serial.print("%\t\t");  AverageSymbol(Hits.hkp2000, Shots.hkp2000, Match.shots_hit, Match.shots_fired);
  Serial.print("P250\t\t");     Serial.print(Weapon_Kill.p250);       Serial.print("\t\t"); Serial.print(Hits.p250);      Serial.print("\t\t"); Serial.print(Shots.p250);       Serial.print("\t\t"); Serial.print( ((float)Hits.p250  / (float)Shots.p250)*100 );            Serial.print("%\t\t");  AverageSymbol(Hits.p250, Shots.p250, Match.shots_hit, Match.shots_fired);
  Serial.print("SG556\t\t");    Serial.print(Weapon_Kill.sg556);      Serial.print("\t\t"); Serial.print(Hits.sg556);     Serial.print("\t\t"); Serial.print(Shots.sg556);      Serial.print("\t\t"); Serial.print( ((float)Hits.sg556  / (float)Shots.sg556)*100 );          Serial.print("%\t\t");  AverageSymbol(Hits.sg556, Shots.sg556, Match.shots_hit, Match.shots_fired);
  Serial.print("SCAR20\t\t");   Serial.print(Weapon_Kill.scar20);     Serial.print("\t\t"); Serial.print(Hits.scar20);    Serial.print("\t\t"); Serial.print(Shots.scar20);     Serial.print("\t\t"); Serial.print( ((float)Hits.scar20  / (float)Shots.scar20)*100 );        Serial.print("%\t\t");  AverageSymbol(Hits.scar20, Shots.scar20, Match.shots_hit, Match.shots_fired);
  Serial.print("SSG08\t\t");    Serial.print(Weapon_Kill.ssg08);      Serial.print("\t\t"); Serial.print(Hits.ssg08);     Serial.print("\t\t"); Serial.print(Shots.ssg08);      Serial.print("\t\t"); Serial.print( ((float)Hits.ssg08  / (float)Shots.ssg08)*100 );          Serial.print("%\t\t");  AverageSymbol(Hits.ssg08, Shots.ssg08, Match.shots_hit, Match.shots_fired);
  Serial.print("MP7\t\t");      Serial.print(Weapon_Kill.mp7);        Serial.print("\t\t"); Serial.print(Hits.mp7);       Serial.print("\t\t"); Serial.print(Shots.mp7);        Serial.print("\t\t"); Serial.print( ((float)Hits.mp7  / (float)Shots.mp7)*100 );              Serial.print("%\t\t");  AverageSymbol(Hits.mp7, Shots.mp7, Match.shots_hit, Match.shots_fired);
  Serial.print("MP9\t\t");      Serial.print(Weapon_Kill.mp9);        Serial.print("\t\t"); Serial.print(Hits.mp9);       Serial.print("\t\t"); Serial.print(Shots.mp9);        Serial.print("\t\t"); Serial.print( ((float)Hits.mp9  / (float)Shots.mp9)*100 );              Serial.print("%\t\t");  AverageSymbol(Hits.mp9, Shots.mp9, Match.shots_hit, Match.shots_fired);
  Serial.print("Nova\t\t");     Serial.print(Weapon_Kill.nova);       Serial.print("\t\t"); Serial.print(Hits.nova);      Serial.print("\t\t"); Serial.print(Shots.nova);       Serial.print("\t\t"); Serial.print( ((float)Hits.nova  / (float)Shots.nova)*100 );            Serial.print("%\t\t");  AverageSymbol(Hits.nova, Shots.nova, Match.shots_hit, Match.shots_fired);
  Serial.print("Negev\t\t");    Serial.print(Weapon_Kill.negev);      Serial.print("\t\t"); Serial.print(Hits.negev);     Serial.print("\t\t"); Serial.print(Shots.negev);      Serial.print("\t\t"); Serial.print( ((float)Hits.negev  / (float)Shots.negev)*100 );          Serial.print("%\t\t");  AverageSymbol(Hits.negev, Shots.negev, Match.shots_hit, Match.shots_fired);
  Serial.print("Sawedoff\t");   Serial.print(Weapon_Kill.sawedoff);   Serial.print("\t\t"); Serial.print(Hits.sawedoff);  Serial.print("\t\t"); Serial.print(Shots.sawedoff);   Serial.print("\t\t"); Serial.print( ((float)Hits.sawedoff  / (float)Shots.sawedoff)*100 );    Serial.print("%\t\t");  AverageSymbol(Hits.sawedoff, Shots.sawedoff, Match.shots_hit, Match.shots_fired);
  Serial.print("Bizon\t\t");    Serial.print(Weapon_Kill.bizon);      Serial.print("\t\t"); Serial.print(Hits.bizon);     Serial.print("\t\t"); Serial.print(Shots.bizon);      Serial.print("\t\t"); Serial.print( ((float)Hits.bizon  / (float)Shots.bizon)*100 );          Serial.print("%\t\t");  AverageSymbol(Hits.bizon, Shots.bizon, Match.shots_hit, Match.shots_fired);
  Serial.print("Tec9\t\t");     Serial.print(Weapon_Kill.tec9);       Serial.print("\t\t"); Serial.print(Hits.tec9);      Serial.print("\t\t"); Serial.print(Shots.tec9);       Serial.print("\t\t"); Serial.print( ((float)Hits.tec9  / (float)Shots.tec9)*100 );            Serial.print("%\t\t");  AverageSymbol(Hits.tec9, Shots.tec9, Match.shots_hit, Match.shots_fired);
  Serial.print("MAG7\t\t");     Serial.print(Weapon_Kill.mag7);       Serial.print("\t\t"); Serial.print(Hits.mag7);      Serial.print("\t\t"); Serial.print(Shots.mag7);       Serial.print("\t\t"); Serial.print( ((float)Hits.mag7  / (float)Shots.mag7)*100 );            Serial.print("%\t\t");  AverageSymbol(Hits.mag7, Shots.mag7, Match.shots_hit, Match.shots_fired);
  Serial.print("M4A1\t\t");     Serial.print(Weapon_Kill.m4a1);       Serial.print("\t\t"); Serial.print(Hits.m4a1);      Serial.print("\t\t"); Serial.print(Shots.m4a1);       Serial.print("\t\t"); Serial.print( ((float)Hits.m4a1 / (float)Shots.m4a1)*100 );             Serial.print("%\t\t");  AverageSymbol(Hits.m4a1, Shots.m4a1, Match.shots_hit, Match.shots_fired);
  Serial.print("Galilar\t\t");  Serial.print(Weapon_Kill.galilar);    Serial.print("\t\t"); Serial.print(Hits.galilar);   Serial.print("\t\t"); Serial.print(Shots.galilar);    Serial.print("\t\t"); Serial.print( ((float)Hits.galilar / (float)Shots.galilar)*100 );       Serial.print("%\t\t");  AverageSymbol(Hits.galilar, Shots.galilar, Match.shots_hit, Match.shots_fired);
  Serial.print("Taser\t\t");    Serial.print(Weapon_Kill.taser);      Serial.print("\t\t"); Serial.print("-/-");          Serial.print("\t\t"); Serial.print(Shots.taser);      Serial.print("\t\t"); Serial.print( ((float)Weapon_Kill.taser / (float)Shots.taser)*100 );    Serial.print("%\t\t");  AverageSymbol(Weapon_Kill.taser, Shots.taser, Match.shots_hit, Match.shots_fired);
  Serial.print("Knife\t\t");    Serial.print(Weapon_Kill.knife);      Serial.print("\t\t"); Serial.print("-/-");          Serial.print("\t\t"); Serial.print("-/-");            Serial.print("\t\t"); Serial.print("-/-");                                                    Serial.println("");
  Serial.print("Grenade\t\t");  Serial.print(Weapon_Kill.hegrenade);  Serial.print("\t\t"); Serial.print("-/-");          Serial.print("\t\t"); Serial.print("-/-");            Serial.print("\t\t"); Serial.print("-/-");                                                    Serial.println("");
  Serial.print("Molotov\t\t");  Serial.print(Weapon_Kill.molotov);    Serial.print("\t\t"); Serial.print("-/-");          Serial.print("\t\t"); Serial.print("-/-");            Serial.print("\t\t"); Serial.print("-/-");                                                    Serial.println("");
  Serial.println("---------------------------------------------------------------------------------------");
  Serial.print("Total\t\t");    Serial.print("   ");                  Serial.print("\t\t"); Serial.print(Match.shots_hit);Serial.print("\t\t");Serial.print(Match.shots_fired); Serial.print("\t\t"); Serial.print( ((float)Match.shots_hit / (float)Match.shots_fired)*100 );Serial.println("%");

  
  Serial.println("\n\nMap Statistics");
  Serial.println("---------------------------------------------------------------------------------------");
  Serial.println("Map\t\tWin Round\tRounds\t\tWin-/Lose Ratio\n");
  
  Serial.print("cs_assault\t");   Serial.print(Wins.cs_assault);    Serial.print("\t\t"); Serial.print(Rounds.cs_assault);    Serial.print("\t\t"); Serial.print( ((float)Wins.cs_assault / (float)Rounds.cs_assault)*100 );      Serial.println("%");
  Serial.print("cs_italy\t");     Serial.print(Wins.cs_italy);      Serial.print("\t\t"); Serial.print(Rounds.cs_italy);      Serial.print("\t\t"); Serial.print( ((float)Wins.cs_italy / (float)Rounds.cs_italy)*100 );          Serial.println("%");
  Serial.print("cs_office\t");    Serial.print(Wins.cs_office);     Serial.print("\t\t"); Serial.print(Rounds.cs_office);     Serial.print("\t\t"); Serial.print( ((float)Wins.cs_office / (float)Rounds.cs_office)*100 );        Serial.println("%");
  Serial.print("de_aztec\t");     Serial.print(Wins.de_aztec);      Serial.print("\t\t"); Serial.print(Rounds.de_aztec);      Serial.print("\t\t"); Serial.print( ((float)Wins.de_aztec / (float)Rounds.de_aztec)*100 );          Serial.println("%");
  Serial.print("de_cbble\t");     Serial.print(Wins.de_cbble);      Serial.print("\t\t"); Serial.print(Rounds.de_cbble);      Serial.print("\t\t"); Serial.print( ((float)Wins.de_cbble / (float)Rounds.de_cbble)*100 );          Serial.println("%");
  Serial.print("de_dust2\t");     Serial.print(Wins.de_dust2);      Serial.print("\t\t"); Serial.print(Rounds.de_dust2);      Serial.print("\t\t"); Serial.print( ((float)Wins.de_dust2 / (float)Rounds.de_dust2)*100 );          Serial.println("%");
  Serial.print("de_inferno\t");   Serial.print(Wins.de_inferno);    Serial.print("\t\t"); Serial.print(Rounds.de_inferno);    Serial.print("\t\t"); Serial.print( ((float)Wins.de_inferno / (float)Rounds.de_inferno)*100 );      Serial.println("%");
  Serial.print("de_nuke\t\t");    Serial.print(Wins.de_nuke);       Serial.print("\t\t"); Serial.print(Rounds.de_nuke);       Serial.print("\t\t"); Serial.print( ((float)Wins.de_nuke / (float)Rounds.de_nuke)*100 );            Serial.println("%");
  Serial.print("de_train\t");     Serial.print(Wins.de_train);      Serial.print("\t\t"); Serial.print(Rounds.de_train);      Serial.print("\t\t"); Serial.print( ((float)Wins.de_train / (float)Rounds.de_train)*100 );          Serial.println("%");
  Serial.print("de_bank\t\t");    Serial.print(Wins.de_bank);       Serial.print("\t\t"); Serial.print(Rounds.de_bank);       Serial.print("\t\t"); Serial.print( ((float)Wins.de_bank / (float)Rounds.de_bank)*100 );            Serial.println("%");
  Serial.print("de_vertigo\t");   Serial.print(Wins.de_vertigo);    Serial.print("\t\t"); Serial.print(Rounds.de_vertigo);    Serial.print("\t\t"); Serial.print( ((float)Wins.de_vertigo / (float)Rounds.de_vertigo)*100 );      Serial.println("%");
  Serial.print("ar_monastery\t"); Serial.print(Wins.ar_monastery);  Serial.print("\t\t"); Serial.print(Rounds.ar_monastery);  Serial.print("\t\t"); Serial.print( ((float)Wins.ar_monastery / (float)Rounds.ar_monastery)*100 );  Serial.println("%");
  Serial.print("ar_shoots\t");    Serial.print(Wins.ar_shoots);     Serial.print("\t\t"); Serial.print(Rounds.ar_shoots);     Serial.print("\t\t"); Serial.print( ((float)Wins.ar_shoots / (float)Rounds.ar_shoots)*100 );        Serial.println("%");
  Serial.print("ar_baggage\t");   Serial.print(Wins.ar_baggage);    Serial.print("\t\t"); Serial.print(Rounds.ar_baggage);    Serial.print("\t\t"); Serial.print( ((float)Wins.ar_baggage / (float)Rounds.ar_baggage)*100 );      Serial.println("%");
  Serial.print("de_lake\t\t");    Serial.print(Wins.de_lake);       Serial.print("\t\t"); Serial.print(Rounds.de_lake);       Serial.print("\t\t"); Serial.print( ((float)Wins.de_lake / (float)Rounds.de_lake)*100 );            Serial.println("%");
  Serial.print("de_sugarcane\t"); Serial.print(Wins.de_sugarcane);  Serial.print("\t\t"); Serial.print(Rounds.de_sugarcane);  Serial.print("\t\t"); Serial.print( ((float)Wins.de_sugarcane / (float)Rounds.de_sugarcane)*100 );  Serial.println("%");
  Serial.print("de_stmarc\t");    Serial.print(Wins.de_stmarc);     Serial.print("\t\t"); Serial.print(Rounds.de_stmarc);     Serial.print("\t\t"); Serial.print( ((float)Wins.de_stmarc / (float)Rounds.de_stmarc)*100 );        Serial.println("%");
  Serial.print("de_safehouse\t"); Serial.print(Wins.de_safehouse);  Serial.print("\t\t"); Serial.print(Rounds.de_safehouse);  Serial.print("\t\t"); Serial.print( ((float)Wins.de_safehouse / (float)Rounds.de_safehouse)*100 );  Serial.println("%");
  Serial.print("cs_assault\t");   Serial.print(Wins.cs_militia);    Serial.print("\t\t"); Serial.print(Rounds.cs_militia);    Serial.print("\t\t"); Serial.print( ((float)Wins.cs_militia / (float)Rounds.cs_militia)*100 );      Serial.println("%");
  
  

  
  return;
}
