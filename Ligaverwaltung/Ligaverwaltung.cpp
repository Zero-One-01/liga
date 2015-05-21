// Ligaverwaltung.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include "menu.h"
#include <windows.h>

void writeTitle();

// ### Haupt-Einstiegspunkt
int main()
{
	// ### Setze Fenster-Titel
	SetConsoleTitle( TEXT("Ligaverwaltung v0.1") );

	// ### Schreibe ein kleines Logo
	writeTitle();

	// ### Rufe das Hauptmenü auf
	mainMenu();

	// ### Beende ohne Fehler-Code
	return 0;
}

void writeTitle()
{
	std::cout << "###########################################" << std::endl;
	std::cout << "#           Ligaverwaltung v0.1           #" << std::endl;
	std::cout << "#     By: Christopher, Zeljko & Pascal     #" << std::endl;
	std::cout << "###########################################" << std::endl;
	std::cout << std::endl << std::endl;
}
