// Ligaverwaltung.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
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
	std::cout << "Bitte w�hlen Sie einen Menu-Punkt: " << std::endl;

	char input = '\r';

}