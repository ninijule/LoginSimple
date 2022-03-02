#include <iostream>
#include <string>
#include "Utils/Console/FormatedConsole.hpp"
#include "Utils/Console/HiddenConsoleInput.hpp"

using namespace std;




int main() {

	cout << FormatedConsole("Bienvenue sur la page de login du site du Ministère de la Défense") << endl;

	cout << FormatedConsole("Veuillez entrer votre identifiant : ") << endl;

	std::string login("");
	std::string password("");
	bool activated(true);

	getline(cin, login);

	cout << FormatedConsole("Veuillez entrer votre mot de passe : ") << endl;

	HideConsoleInput(activated);

	getline(cin, password);

	cout << FormatedConsole(login) << endl << FormatedConsole(password);

	return 0;
}

