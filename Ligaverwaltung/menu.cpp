
#include "stdafx.h"
#include <iostream>
#include <conio.h>


void writeInstruction()
{
	std::cout << "Bitte wählen Sie eine Aktion aus: ";
}

void mainMenu()
{
	
	// ### Vor jedem Schreiben eines Menu's eine Anweisung ausgeben
	writeInstruction();

	std::cout << "[1] Turnierverwaltung " << std::endl;
	std::cout << "[2] Optionen" << std::endl;
	std::cout << "[0] Beenden" << std::endl;
	
	char input;

	do
	{
		std::cin >> input;

		switch (input)
		{
			case '1':
				// ### Anweisung 1
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

