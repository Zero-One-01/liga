// Ligaverwaltung.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include "menu.h"

char getInput();

int main()
{
	char input = getInput();

	return 0;
}

char getInput()
{
	std::cout << "Bitte wählen Sie einen Menu-Punkt: " << std::endl;

	char input = '\r';

}