
#include "stdafx.h"
#include <iostream>
#include <conio.h>

void mainMenu()
{
	
	std::cout << "[1] Turnierverwaltung " << std::endl;
	std::cout << "[2] Optionen" << std::endl;
	std::cout << "[0] Beenden" << std::endl;
	
	char input;

	do
	{
		input = _getch();

		switch (input)
		{
		case '1':
			break;
		case '2':
			break;
		default:
			break;
		}

	} while (input != '0');

}

