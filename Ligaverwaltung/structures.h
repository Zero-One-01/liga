#include "stdafx.h"
#include <ctime>

// ### Liege Struktur
struct strLeague {
	int id;				// ### ID der Liga
	char cTitle[32];	// ### Titel der Liga
	time_t date;		// ### Zeitstempel der Liga
} strLeague;

// ### Team Struktur
struct strTeam {
	int id;				// ### ID des Teams
	char cTitle[32];	// ### Name des Teams
	int iPoints;		// ### Gesamt errechnete Punkte
	int iDefeats;		// ### Niederlagen
	int iWins;			// ### Siege 
	int iDraws;			// ### Unentschieden
} strTeam;

// ### Spiel Struktur
struct strGame {
	int iTeamHome;			// ### Referenz zu struct strTeam (Heimspieler)
	int iTeamOutwards;		// ### Referenz zu struct strTeam (Gastspieler)
	int iGoalsHome;		// ### Tore der Heimspieler
	int iGoalsOutwards;	// ### Tore der Gastspieler
	int iPointsHome;		// ### Punkte der Heimspieler
	int iPointsOutwards;		// ### Punkte der Gastspieler
	time_t date;			// ### Zeitstempel des Spielt
} strGame;
