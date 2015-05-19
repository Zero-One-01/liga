
#include "stdafx.h"
#include <iostream>
#include <conio.h>


void writeInstruction()
{
	std::cout << "Bitte wählen Sie eine Aktion aus: " << std::endl;
}

void mainMenu()
{
	
	// ### Vor jedem Schreiben eines Menu's eine Anweisung ausgeben
	writeInstruction();

	std::cout << "[1] Turnierverwaltung " << std::endl;
	std::cout << "[2] Optionen" << std::endl;
	std::cout << "[0] Beenden" << std::endl;
	
	char input;
	bool breakout = false;

	do
	{
		std::cin >> input;

		switch (input)
		{
			case '1':
				breakout = true;
				break;
			case '2':
				// ### Anweisung 2
				break;
			default:
				// ### Breche Software ab
				break;
		}

	} while (input != '0' && breakout == false);

}

void writeTournamentMenu()
{
	FILE *competitionDatabase;
	fopen_s(&competitionDatabase, "D:\\competition.dat", "rw");
	
	if (competitionDatabase == NULL)
	{
		std::cout << "Fehler beim Laden der Datenbank." << std::endl;
		system("PAUSE");
		return;
	}

	if (feof(competitionDatabase)){
		std::cout << "Es wurden keine Ligen gefunden.";
	}
}