#include <iostream>
#include <string>
#include <conio.h>		// Contient _kbhit et _getch
#include <Windows.h>	// Contient Sleep

using namespace std;

int main() {
	char touche;
	string message;
	bool quitter = false;

	cout << "Bienvenue dans la taverne!" << endl << endl;
	cout << "Appuyez sur B pour prendre une gorgée de bière." << endl
		<< "Appuyez sur C pour parler." << endl
		<< "Appuyez sur Q pour quitter." << endl << endl;

	while (!quitter) {
		if (_kbhit()) { // Si une touche du clavier a été appuyée
			touche = _getch(); // Récupérer le caractère correspondant à la touche

			switch (touche) {
			case 'b':
				cout << "Glou glou." << endl;
				break;
			case 'c':
				cout << "Que voulez-vous dire? ";
				getline(cin, message);
				cout << "Vous avez dit: " << message << endl;
				break;
			case 'q':
				quitter = true;
				break;
			}
		}

		Sleep(30); // On peut mettre un sleep dans la boucle pour éviter de « bombarder » le processeur.
	}
}
