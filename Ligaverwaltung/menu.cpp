
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "menu.h"
#include "structures.h"

FILE *competitionDatabase;

void writeInstruction()
{
	std::cout << "Bitte w\x84 \bhlen Sie eine Aktion aus: " << std::endl;
}

void mainMenu()
{
	std::cout << "[1] Turnierverwaltung " << std::endl;
	std::cout << "[2] Optionen" << std::endl;
	std::cout << "[0] Beenden" << std::endl << std::endl;
	
	// ### Nach jedem Schreiben eines Menu's eine Anweisung ausgeben
	writeInstruction();

	char input;
	
	do
	{
		std::cin >> input;

		switch (input)
		{
			case '1':
				writeTournamentMenu();
				break;
			case '2':
				// ### Anweisung 2
				break;
			default:
				// ### Breche Software ab
				break;
		}

	} while (input != '0');

}

void writeTournamentMenu()
{
	system("cls");

	readAndWriteCompetitions();

	std::cout << "====================================" << std::endl;
	std::cout << "[1] L\x94schen" << std::endl;
	std::cout << "[2] Bearbeiten" << std::endl;
	std::cout << "[3] Hinzuf\x81gen" << std::endl << std::endl;
	
	writeInstruction();
}

void readAndWriteCompetitions()
{
	fopen_s(&competitionDatabase, "D:\\competitions.dat", "a+");

	if (competitionDatabase == NULL)
	{
		std::cout << "Fehler beim Lesen der Datenbank." << std::endl;
		system("PAUSE");
		return;
	}

	int counter = 0;
	while (!feof(competitionDatabase))
	{
		fread(&strLeague, sizeof(strLeague), 1, competitionDatabase);

		std::cout << "[" << ++counter << "]" << " >> " << strLeague.cTitle << std::endl;
	}

	fclose(competitionDatabase);
}