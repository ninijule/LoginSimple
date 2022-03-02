#include <string>

class Personne {

public:
	Personne();
	Personne(int vie, int degats, std::string name);


	private:
		int vie;
		int degats;
		std::string name;
		

};