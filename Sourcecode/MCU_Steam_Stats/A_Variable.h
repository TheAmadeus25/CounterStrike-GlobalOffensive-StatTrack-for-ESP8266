/*
  ┌────────────────────────────────────────────────────┐
  │ Counter Strike: Global Offensive Stats for ESP8266 by TheAmadeus25               ┃
  ├────────────────────────────────────────────────────┤
  │ https://theamadeus25.github.io/            /                                     ┃
  ├────────────────────────────────────────────────────┤
  │ IMPORTANT! If you like it, please share and like it! If you use this in your     ┃
  │ project, please mention me and add the URL to my GitHub page, too.               ┃
  ├────────────────────────────────────────────────────┤
  │ Database for all Variable catching from Valve                                    ┃
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

#ifndef A_Variable_h
#define A_Variable_h

struct {  // Stats
  unsigned int  kills;
  unsigned int  deaths;
  unsigned long time_played;
  unsigned int  planted_bombs;
  unsigned int  defused_bombs;
  unsigned int  wins;
  unsigned long damage_done;
  unsigned long money_earned;
  unsigned int  rescued_hostages;
} Stats;

struct {  // Weapon_Kill
  unsigned int knife;
  unsigned int hegrenade;
  unsigned int glock;
  unsigned int deagle;
  unsigned int elite;
  unsigned int fiveseven;
  unsigned int xm1014;
  unsigned int mac10;
  unsigned int ump45;
  unsigned int p90;
  unsigned int awp;
  unsigned int ak47;
  unsigned int aug;
  unsigned int famas;
  unsigned int g3sg1;
  unsigned int m249;
  unsigned int hkp2000;
  unsigned int p250;
  unsigned int sg556;
  unsigned int scar20;
  unsigned int ssg08;
  unsigned int mp7;
  unsigned int mp9;
  unsigned int nova;
  unsigned int negev;
  unsigned int sawedoff;
  unsigned int bizon;
  unsigned int tec9;
  unsigned int mag7;
  unsigned int m4a1;
  unsigned int galilar;
  unsigned int molotov;
  unsigned long taser;
} Weapon_Kill;

struct {  // Kills
  unsigned int headshot;
  unsigned int enemy_weapon;
  unsigned int pistolround;
} Kills;

struct {  // Wins, Won, Rounds
  unsigned int cs_assault;
  unsigned int cs_italy;
  unsigned int cs_office;
  unsigned int de_aztec;
  unsigned int de_cbble;
  unsigned int de_dust2;
  unsigned int de_inferno;
  unsigned int de_nuke;
  unsigned int de_train;
  unsigned int de_bank;
  unsigned int de_vertigo;
  unsigned int ar_monastery;
  unsigned int ar_shoots;
  unsigned int ar_baggage;
  unsigned int de_lake;
  unsigned int de_sugarcane;
  unsigned int de_stmarc;
  unsigned int de_safehouse;
  unsigned int cs_militia;
} Wins, Won, Rounds;

struct {  // Match
  unsigned int weapons_donated;
  unsigned int broken_windows;
  unsigned int knife_fight;
  unsigned int kills_enemy_blinded;
  unsigned int kills_against_zoomed_sniper;
  unsigned int dominations;
  unsigned int domination_overkills;
  unsigned int revenges;
  unsigned int shots_hit;
  unsigned int shots_fired;
  unsigned int rounds_played;
  unsigned int won;
  unsigned int played;
  unsigned int gg_won;
  unsigned int gg_played;
  unsigned int progressive_won;
  unsigned int trbomb_won;
  unsigned int contribution_score;
} Match;

struct {  // Shots
  unsigned long hit;
  unsigned long fired;
  unsigned int  played;
  unsigned long deagle;
  unsigned long glock;
  unsigned long elite;
  unsigned long fiveseven;
  unsigned long awp;
  unsigned long ak47;
  unsigned long aug;
  unsigned long famas;
  unsigned long g3sg1;
  unsigned long p90;
  unsigned long mac10;
  unsigned long ump45;
  unsigned long xm1014;
  unsigned long m249;
  unsigned long hkp2000;
  unsigned long p250;
  unsigned long sg556;
  unsigned long scar20;
  unsigned long ssg08;
  unsigned long mp7;
  unsigned long mp9;
  unsigned long nova;
  unsigned long negev;
  unsigned long sawedoff;
  unsigned long bizon;
  unsigned long tec9;
  unsigned long mag7;
  unsigned long m4a1;
  unsigned long galilar;
  unsigned long taser;
} Shots;

struct {  // Hits
  unsigned long deagle;
  unsigned long glock;
  unsigned long elite;
  unsigned long fiveseven;
  unsigned long awp;
  unsigned long ak47;
  unsigned long aug;
  unsigned long famas;
  unsigned long g3sg1;
  unsigned long p90;
  unsigned long mac10;
  unsigned long ump45;
  unsigned long xm1014;
  unsigned long m249;
  unsigned long hkp2000;
  unsigned long p250;
  unsigned long sg556;
  unsigned long scar20;
  unsigned long ssg08;
  unsigned long mp7;
  unsigned long mp9;
  unsigned long nova;
  unsigned long negev;
  unsigned long sawedoff;
  unsigned long bizon;
  unsigned long tec9;
  unsigned long mag7;
  unsigned long m4a1;
  unsigned long galilar;
  unsigned long taser;
} Hits;
/*
struct {  // Rounds
  unsigned int cs_assault;
  unsigned int cs_italy;
  unsigned int cs_office;
  unsigned int de_aztec;
  unsigned int de_cbble;
  unsigned int de_dust2;
  unsigned int de_inferno;
  unsigned int de_nuke;
  unsigned int de_train;

  unsigned int de_lake;
  unsigned int de_safehouse;
  unsigned int de_sugarcane;
  unsigned int de_stmarc;
  unsigned int de_bank;

  unsigned int ar_shoots;
  unsigned int ar_baggage;
  
  unsigned int ar_monastery;
  unsigned int de_vertigo;
  unsigned int cs_militia;
} Rounds;
*/
struct {  // Last_Match
  unsigned int t_wins;
  unsigned int ct_wins;
  unsigned int wins;
  unsigned int max_players;
  unsigned int kills;
  unsigned int deaths;
  unsigned int mvps;
  unsigned int favweapon_id;
  unsigned int favweapon_shots;
  unsigned int favweapon_hits;
  unsigned int favweapon_kills;
  unsigned int damage;
  unsigned int money_spent;
  unsigned int dominations;
  unsigned int revenges;
  unsigned int contribution_score;
  unsigned int rounds;
  unsigned int gg_contribution_score;
} Last_Match;

struct {  // MVP
  unsigned int mvp;
} MVP;

struct {  // Terrorism
  unsigned int TR_planted_bombs;
  unsigned int TR_defused_bombs;
} Terrorism;

struct {  // Gun_Game
  unsigned int rounds_won;
  unsigned int rounds_played;
  unsigned int contribution_score;
} Gun_Game;

struct {  // Lesson
  unsigned int buymenu;
  unsigned int buyarmor;
  unsigned int plant_bomb;
  unsigned int bomb_carrier;
  unsigned int bomb_sites_A;
  unsigned int defuse_planted_bomb;
  unsigned int follow_bomber;
  unsigned int pickup_bomb;
  unsigned int prevent_bomb_pickup;
  unsigned int cycle_weapons_kb;
  unsigned int zoom;
  unsigned int reload;
  unsigned int bomb_sites_B;
  unsigned int version_number;
  unsigned int find_planted_bomb;
  unsigned int hostage_lead_to_hrz;
  unsigned int rescue_zone;
  unsigned int inspect;
} Lesson;

struct {  // EXP
  unsigned long xpearnedgames;
} EXP;

#endif
