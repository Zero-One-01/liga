#include "stdafx.h"
#include <ctime>

struct strLeague {
	int id;
	char cTitle[32];
	time_t date;
};

struct strTeam {
	int id;
	char cTitle[32];
	int iPoints;
	int iDefeats;
	int iWins;
	int iDraws;
};

struct strGame {
	int iTeamHome;
	int iTeamOutwards;
	int iPointsHome;
	int iPointsOutwards;
	time_t date;
};