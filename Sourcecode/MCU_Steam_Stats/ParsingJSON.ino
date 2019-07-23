/*
  ┌────────────────────────────────────────────────────┐
  │ Counter Strike: Global Offensive Stats for ESP8266 by TheAmadeus25               ┃
  ├────────────────────────────────────────────────────┤
  │ https://theamadeus25.github.io/            /                                     ┃
  ├────────────────────────────────────────────────────┤
  │ IMPORTANT! If you like it, please share and like it! If you use this in your     ┃
  │ project, please mention me and add the URL to my GitHub page, too.               ┃
  ├────────────────────────────────────────────────────┤
  │ ParsingJSON(): Parsing all Information to Variables                              ┃
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

void ParsingJSON(){
  DynamicJsonBuffer jsonBuffer;
  JsonObject& root = jsonBuffer.parseObject(http.getStream());

  Stats.kills                       = root["playerstats"]["stats"][0]["value"];
  Stats.deaths                      = root["playerstats"]["stats"][1]["value"];
  Stats.time_played                 = root["playerstats"]["stats"][2]["value"];
  Stats.planted_bombs               = root["playerstats"]["stats"][3]["value"];
  Stats.defused_bombs               = root["playerstats"]["stats"][4]["value"];
  Stats.wins                        = root["playerstats"]["stats"][5]["value"];
  Stats.damage_done                 = root["playerstats"]["stats"][6]["value"];
  Stats.money_earned                = root["playerstats"]["stats"][7]["value"];
  Stats.rescued_hostages            = root["playerstats"]["stats"][8]["value"];

  Weapon_Kill.knife                 = root["playerstats"]["stats"][9]["value"];
  Weapon_Kill.hegrenade             = root["playerstats"]["stats"][10]["value"];
  Weapon_Kill.glock                 = root["playerstats"]["stats"][11]["value"];
  Weapon_Kill.deagle                = root["playerstats"]["stats"][12]["value"];
  Weapon_Kill.elite                 = root["playerstats"]["stats"][13]["value"];
  Weapon_Kill.fiveseven             = root["playerstats"]["stats"][14]["value"];
  Weapon_Kill.xm1014                = root["playerstats"]["stats"][15]["value"];
  Weapon_Kill.mac10                 = root["playerstats"]["stats"][16]["value"];
  Weapon_Kill.ump45                 = root["playerstats"]["stats"][17]["value"];
  Weapon_Kill.p90                   = root["playerstats"]["stats"][18]["value"];
  Weapon_Kill.awp                   = root["playerstats"]["stats"][19]["value"];
  Weapon_Kill.ak47                  = root["playerstats"]["stats"][20]["value"];
  Weapon_Kill.aug                   = root["playerstats"]["stats"][21]["value"];
  Weapon_Kill.famas                 = root["playerstats"]["stats"][22]["value"];
  Weapon_Kill.g3sg1                 = root["playerstats"]["stats"][23]["value"];
  Weapon_Kill.m249                  = root["playerstats"]["stats"][24]["value"];

  Kills.headshot                    = root["playerstats"]["stats"][25]["value"];
  Kills.enemy_weapon                = root["playerstats"]["stats"][26]["value"];
  Kills.pistolround                 = root["playerstats"]["stats"][27]["value"];

  Wins.cs_assault                   = root["playerstats"]["stats"][28]["value"];
  Wins.cs_italy                     = root["playerstats"]["stats"][29]["value"];
  Wins.cs_office                    = root["playerstats"]["stats"][30]["value"];
  Wins.de_aztec                     = root["playerstats"]["stats"][31]["value"];
  Wins.de_cbble                     = root["playerstats"]["stats"][32]["value"];
  Wins.de_dust2                     = root["playerstats"]["stats"][33]["value"];
  Wins.de_inferno                   = root["playerstats"]["stats"][34]["value"];
  Wins.de_nuke                      = root["playerstats"]["stats"][35]["value"];
  Wins.de_train                     = root["playerstats"]["stats"][36]["value"];

  Match.weapons_donated             = root["playerstats"]["stats"][37]["value"];
  Match.broken_windows              = root["playerstats"]["stats"][38]["value"];
  Match.kills_enemy_blinded         = root["playerstats"]["stats"][39]["value"];
  Match.knife_fight                 = root["playerstats"]["stats"][40]["value"];
  Match.kills_against_zoomed_sniper = root["playerstats"]["stats"][41]["value"];
  Match.dominations                 = root["playerstats"]["stats"][42]["value"];
  Match.domination_overkills        = root["playerstats"]["stats"][43]["value"];
  Match.revenges                    = root["playerstats"]["stats"][44]["value"];
  Match.shots_hit                   = root["playerstats"]["stats"][45]["value"];
  Match.shots_fired                 = root["playerstats"]["stats"][46]["value"];
  Match.rounds_played               = root["playerstats"]["stats"][47]["value"];
  
  Shots.deagle                      = root["playerstats"]["stats"][48]["value"];
  Shots.glock                       = root["playerstats"]["stats"][49]["value"];
  Shots.elite                       = root["playerstats"]["stats"][50]["value"];
  Shots.fiveseven                   = root["playerstats"]["stats"][51]["value"];
  Shots.awp                         = root["playerstats"]["stats"][52]["value"];
  Shots.ak47                        = root["playerstats"]["stats"][53]["value"];
  Shots.aug                         = root["playerstats"]["stats"][54]["value"];
  Shots.famas                       = root["playerstats"]["stats"][55]["value"];
  Shots.g3sg1                       = root["playerstats"]["stats"][56]["value"];
  Shots.p90                         = root["playerstats"]["stats"][57]["value"];
  Shots.mac10                       = root["playerstats"]["stats"][58]["value"];
  Shots.ump45                       = root["playerstats"]["stats"][59]["value"];
  Shots.xm1014                      = root["playerstats"]["stats"][60]["value"];
  Shots.m249                        = root["playerstats"]["stats"][61]["value"];
  
  Hits.deagle                       = root["playerstats"]["stats"][62]["value"];
  Hits.glock                        = root["playerstats"]["stats"][63]["value"];
  Hits.elite                        = root["playerstats"]["stats"][64]["value"];
  Hits.fiveseven                    = root["playerstats"]["stats"][65]["value"];
  Hits.awp                          = root["playerstats"]["stats"][66]["value"];
  Hits.ak47                         = root["playerstats"]["stats"][67]["value"];
  Hits.aug                          = root["playerstats"]["stats"][68]["value"];
  Hits.famas                        = root["playerstats"]["stats"][69]["value"];
  Hits.g3sg1                        = root["playerstats"]["stats"][70]["value"];
  Hits.p90                          = root["playerstats"]["stats"][71]["value"];
  Hits.mac10                        = root["playerstats"]["stats"][72]["value"];
  Hits.ump45                        = root["playerstats"]["stats"][73]["value"];
  Hits.xm1014                       = root["playerstats"]["stats"][74]["value"];
  Hits.m249                         = root["playerstats"]["stats"][75]["value"];

  Rounds.cs_assault                 = root["playerstats"]["stats"][76]["value"];
  Rounds.cs_italy                   = root["playerstats"]["stats"][77]["value"];
  Rounds.cs_office                  = root["playerstats"]["stats"][78]["value"];
  Rounds.de_aztec                   = root["playerstats"]["stats"][79]["value"];
  Rounds.de_cbble                   = root["playerstats"]["stats"][80]["value"];
  Rounds.de_dust2                   = root["playerstats"]["stats"][81]["value"];
  Rounds.de_inferno                 = root["playerstats"]["stats"][82]["value"];
  Rounds.de_nuke                    = root["playerstats"]["stats"][83]["value"];
  Rounds.de_train                   = root["playerstats"]["stats"][84]["value"];
  
  Last_Match.t_wins                 = root["playerstats"]["stats"][85]["value"];
  Last_Match.ct_wins                = root["playerstats"]["stats"][86]["value"];
  Last_Match.wins                   = root["playerstats"]["stats"][87]["value"];
  Last_Match.max_players            = root["playerstats"]["stats"][88]["value"];
  Last_Match.kills                  = root["playerstats"]["stats"][89]["value"];
  Last_Match.deaths                 = root["playerstats"]["stats"][90]["value"];
  Last_Match.mvps                   = root["playerstats"]["stats"][91]["value"];
  Last_Match.favweapon_id           = root["playerstats"]["stats"][92]["value"];
  Last_Match.favweapon_shots        = root["playerstats"]["stats"][93]["value"];
  Last_Match.favweapon_hits         = root["playerstats"]["stats"][94]["value"];
  Last_Match.favweapon_kills        = root["playerstats"]["stats"][95]["value"];
  Last_Match.damage                 = root["playerstats"]["stats"][96]["value"];
  Last_Match.money_spent            = root["playerstats"]["stats"][97]["value"];
  Last_Match.dominations            = root["playerstats"]["stats"][98]["value"];
  Last_Match.revenges               = root["playerstats"]["stats"][99]["value"];

  MVP.mvp                           = root["playerstats"]["stats"][100]["value"];
  
  Rounds.de_lake                    = root["playerstats"]["stats"][101]["value"];
  Rounds.de_safehouse               = root["playerstats"]["stats"][102]["value"];
  Rounds.de_sugarcane               = root["playerstats"]["stats"][103]["value"];
  Rounds.de_stmarc                  = root["playerstats"]["stats"][104]["value"];
  Rounds.de_bank                    = root["playerstats"]["stats"][105]["value"];
  
  Terrorism.TR_planted_bombs        = root["playerstats"]["stats"][106]["value"];
  Terrorism.TR_defused_bombs        = root["playerstats"]["stats"][107]["value"];
  
  Gun_Game.rounds_won               = root["playerstats"]["stats"][108]["value"];
  Gun_Game.rounds_played            = root["playerstats"]["stats"][109]["value"];
  
  Wins.de_bank                      = root["playerstats"]["stats"][110]["value"]; // Total Wins 
  Wins.de_vertigo                   = root["playerstats"]["stats"][111]["value"];
  Wins.ar_monastery                 = root["playerstats"]["stats"][112]["value"];
  
  Rounds.ar_shoots                  = root["playerstats"]["stats"][113]["value"];
  Rounds.ar_baggage                 = root["playerstats"]["stats"][114]["value"];
  
  Wins.ar_shoots                    = root["playerstats"]["stats"][115]["value"];
  Wins.ar_baggage                   = root["playerstats"]["stats"][116]["value"];
  Wins.de_lake                      = root["playerstats"]["stats"][117]["value"];
  Wins.de_sugarcane                 = root["playerstats"]["stats"][118]["value"];
  Wins.de_stmarc                    = root["playerstats"]["stats"][119]["value"]; 
  Won.de_bank                       = root["playerstats"]["stats"][120]["value"]; // Total Matches Won
  Wins.de_safehouse                 = root["playerstats"]["stats"][121]["value"];
  
  Match.won                         = root["playerstats"]["stats"][122]["value"];
  Match.played                      = root["playerstats"]["stats"][123]["value"];
  Match.gg_won                      = root["playerstats"]["stats"][124]["value"];
  Match.gg_played                   = root["playerstats"]["stats"][125]["value"];
  Match.progressive_won             = root["playerstats"]["stats"][126]["value"];
  Match.trbomb_won                  = root["playerstats"]["stats"][127]["value"];
  Match.contribution_score          = root["playerstats"]["stats"][128]["value"];

  Last_Match.contribution_score     = root["playerstats"]["stats"][129]["value"];
  Last_Match.rounds                 = root["playerstats"]["stats"][130]["value"];
  
  Weapon_Kill.hkp2000               = root["playerstats"]["stats"][131]["value"];
  Shots.hkp2000                     = root["playerstats"]["stats"][132]["value"];
  Hits.hkp2000                      = root["playerstats"]["stats"][133]["value"];
  
  Hits.p250                         = root["playerstats"]["stats"][134]["value"];
  Weapon_Kill.p250                  = root["playerstats"]["stats"][135]["value"];
  Shots.p250                        = root["playerstats"]["stats"][136]["value"];
  
  Weapon_Kill.sg556                 = root["playerstats"]["stats"][137]["value"];
  Shots.sg556                       = root["playerstats"]["stats"][138]["value"];
  Hits.sg556                        = root["playerstats"]["stats"][139]["value"];
  
  Hits.scar20                       = root["playerstats"]["stats"][140]["value"];
  Weapon_Kill.scar20                = root["playerstats"]["stats"][141]["value"];
  Shots.scar20                      = root["playerstats"]["stats"][142]["value"];
  
  Shots.ssg08                       = root["playerstats"]["stats"][143]["value"];
  Hits.ssg08                        = root["playerstats"]["stats"][144]["value"];
  Weapon_Kill.ssg08                 = root["playerstats"]["stats"][145]["value"];
  
  Shots.mp7                         = root["playerstats"]["stats"][146]["value"];
  Hits.mp7                          = root["playerstats"]["stats"][147]["value"];
  Weapon_Kill.mp7                   = root["playerstats"]["stats"][148]["value"];
  
  Weapon_Kill.mp9                   = root["playerstats"]["stats"][149]["value"];
  Shots.mp9                         = root["playerstats"]["stats"][150]["value"];
  Hits.mp9                          = root["playerstats"]["stats"][151]["value"];
  
  Hits.nova                         = root["playerstats"]["stats"][152]["value"];
  Weapon_Kill.nova                  = root["playerstats"]["stats"][153]["value"];
  Shots.nova                        = root["playerstats"]["stats"][154]["value"];
  
  Hits.negev                        = root["playerstats"]["stats"][155]["value"];
  Weapon_Kill.negev                 = root["playerstats"]["stats"][156]["value"];
  Shots.negev                       = root["playerstats"]["stats"][157]["value"];
  
  Shots.sawedoff                    = root["playerstats"]["stats"][158]["value"];
  Hits.sawedoff                     = root["playerstats"]["stats"][159]["value"];
  Weapon_Kill.sawedoff              = root["playerstats"]["stats"][160]["value"];
  
  Shots.bizon                       = root["playerstats"]["stats"][161]["value"];
  Hits.bizon                        = root["playerstats"]["stats"][162]["value"];
  Weapon_Kill.bizon                 = root["playerstats"]["stats"][163]["value"];
  
  Weapon_Kill.tec9                  = root["playerstats"]["stats"][164]["value"];
  Shots.tec9                        = root["playerstats"]["stats"][165]["value"];
  Hits.tec9                         = root["playerstats"]["stats"][166]["value"];
  
  Shots.mag7                        = root["playerstats"]["stats"][167]["value"];
  Hits.mag7                         = root["playerstats"]["stats"][168]["value"];
  Weapon_Kill.mag7                  = root["playerstats"]["stats"][169]["value"];
  
  Gun_Game.contribution_score       = root["playerstats"]["stats"][170]["value"];
  
  Last_Match.gg_contribution_score  = root["playerstats"]["stats"][171]["value"];
  
  Weapon_Kill.m4a1                  = root["playerstats"]["stats"][172]["value"];
  Weapon_Kill.galilar               = root["playerstats"]["stats"][173]["value"];
  Weapon_Kill.molotov               = root["playerstats"]["stats"][174]["value"];
  Weapon_Kill.taser                 = root["playerstats"]["stats"][175]["value"];
  
  Shots.m4a1                        = root["playerstats"]["stats"][176]["value"];
  Shots.galilar                     = root["playerstats"]["stats"][177]["value"];
  Shots.taser                       = root["playerstats"]["stats"][178]["value"];
  
  Hits.m4a1                         = root["playerstats"]["stats"][179]["value"];
  Hits.galilar                      = root["playerstats"]["stats"][180]["value"];
  
  Rounds.ar_monastery               = root["playerstats"]["stats"][181]["value"];
  Rounds.de_vertigo                 = root["playerstats"]["stats"][182]["value"];
  
  Won.ar_shoots                     = root["playerstats"]["stats"][183]["value"];
  Won.ar_baggage                    = root["playerstats"]["stats"][184]["value"];
  Won.de_lake                       = root["playerstats"]["stats"][185]["value"];
  Won.de_sugarcane                  = root["playerstats"]["stats"][186]["value"];
  Won.de_stmarc                     = root["playerstats"]["stats"][187]["value"];
  Won.de_safehouse                  = root["playerstats"]["stats"][188]["value"];
  
  Lesson.buymenu                    = root["playerstats"]["stats"][189]["value"];
  Lesson.buyarmor                   = root["playerstats"]["stats"][190]["value"];
  Lesson.plant_bomb                 = root["playerstats"]["stats"][191]["value"];
  Lesson.bomb_carrier               = root["playerstats"]["stats"][192]["value"];
  Lesson.bomb_sites_A               = root["playerstats"]["stats"][193]["value"];
  Lesson.defuse_planted_bomb        = root["playerstats"]["stats"][194]["value"];
  Lesson.follow_bomber              = root["playerstats"]["stats"][195]["value"];
  Lesson.pickup_bomb                = root["playerstats"]["stats"][196]["value"];
  Lesson.prevent_bomb_pickup        = root["playerstats"]["stats"][197]["value"];
  Lesson.cycle_weapons_kb           = root["playerstats"]["stats"][198]["value"];
  Lesson.zoom                       = root["playerstats"]["stats"][199]["value"];
  Lesson.reload                     = root["playerstats"]["stats"][200]["value"];
  Lesson.plant_bomb                 = root["playerstats"]["stats"][201]["value"];
  Lesson.bomb_sites_B               = root["playerstats"]["stats"][202]["value"];
  Lesson.version_number             = root["playerstats"]["stats"][203]["value"];
  Lesson.find_planted_bomb          = root["playerstats"]["stats"][204]["value"];
  Lesson.hostage_lead_to_hrz        = root["playerstats"]["stats"][205]["value"];
  Lesson.rescue_zone                = root["playerstats"]["stats"][206]["value"];

  Wins.cs_militia                   = root["playerstats"]["stats"][207]["value"];
  
  Rounds.cs_militia                 = root["playerstats"]["stats"][208]["value"];
  
  Lesson.inspect                    = root["playerstats"]["stats"][209]["value"];
  
  EXP.xpearnedgames                 = root["playerstats"]["stats"][210]["value"]; // Very new

  
  // Hold on! There is more!! Achievements
  // You will find it here:

  root["playerstats"]["achievements"][0]["value"];
  // (in my case) until
  root["playerstats"]["achievements"][106]["value"];
  
  // However, it's useless. It show all achievements you unlocked, only. :/
 
  return;
}
