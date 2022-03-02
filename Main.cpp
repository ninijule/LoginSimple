#include <iostream>
#include <string>
#include <fstream>
#include "Personne.hpp"

#include <windows.h>
#include <iostream>
#include <string>
#include <memory>
#include <iterator>

using namespace std;

std::string FormaterPourConsole(const std::string& src) {
	auto dest = std::make_unique<char[]>(src.size() + 1);
	CharToOem(src.c_str(), &dest[0]);
	return { &dest[0], &dest[src.size()] };
}


int main() {

	//cout << FormaterPourConsole("Étonnant?") << endl;

	Personne david(100, 10, "David");

	srand((unsigned)time(0));

	const int max_number = 100;
	int nbr_user(0), essaie(1);

	const int nbr_cache = (rand() % max_number);
	std::string str = "========== Jeu du nombre aléatoire ==========";

	cout << FormaterPourConsole(str) << endl;

	do {
		cout << FormaterPourConsole("Entrez un nombre") << endl;
		cin >> nbr_user;
		if (nbr_user > nbr_cache) {
			cout << "C'est plus petit" << endl;
			essaie++;

		}
		else if (nbr_user < nbr_cache) {
			cout << "C'est plus grand" << endl;
			essaie++;
		}

	} while (nbr_cache != nbr_user);

	cout << FormaterPourConsole("Félicitation vous avez trouvé le nombre mystère en : ") << essaie << " coups." << endl;

	return 0;
}