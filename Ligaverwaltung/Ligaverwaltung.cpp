// Ligaverwaltung.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include "menu.h"

char getInput(char cAllowedChars[]);
bool isInArray(char cItem, char cArray[]);


int main()
{
	char cAllowedInputs[3] = { 1, 2, 3 };

	switch (getInput(cAllowedInputs)){
		case '1':
			// Ligaverwaltung
			break;

		case '2':
			// Optionen
			break;

		case '0':
			return 0; // Beenden
			break;

		default:
			std::cout << "Eingabe nicht erkannt...";
			break;
	}

	system("PAUSE");

	return 0;
}

char getInput(char cAllowedChars[])
{
	char input;

	do {
		std::cout << "Bitte wählen Sie einen Menu-Punkt: " << std::endl;
		input = _getch();
	} while (input == '\r');

	bool isInArrayOutut = isInArray(input, cAllowedChars);

	return input;
}


bool isInArray(char cItem, char cArray[])
{
	for (int i = 0; i < sizeof(cArray)-1; i++)
	{
		if (cArray[i] == cItem){
			return true;
		}
	}

	return false;
}