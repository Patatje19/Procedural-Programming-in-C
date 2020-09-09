// Schrijf een programma dat de gebruiker vraagt om de gegevens van een meubelstuk. Stop
// deze gegevens in een struct furniture en druk de gegevens vervolgens af. 

#include <string>
#include <vector>
#include <iostream>

struct furniture {
	int number = 0;
	std::string name = "";
	float weight = 0.0;
	float length = 0.0;
};

int main () {
	std::cout << "Vul de gegevens voor uw meubelstukken in!" << std::endl;
	
	std::string value = "j";
	std::vector<furniture> artikelen = {};
	
	while (value == "j") {
		furniture artikel = {};
	
		std::cout << "Geef artikel nummer: " << std::endl;
		std::cin >> artikel.number;
		
		std::cout << "Geef artikel naam: " << std::endl;
		std::cin >> artikel.name;
		
		std::cout << "Geef artikel gewicht: " << std::endl;
		std::cin >> artikel.weight;
		
		std::cout << "Geef artikel lengte: " << std::endl;
		std::cin >> artikel.length;
		
		artikelen.push_back(artikel);
		
		std::cout << "Wilt u nog een artikel invoeren: (j/n) " << std::endl;
		std::cin >> value;
	}
	
	for (int i = 0; i < artikelen.size(); i++) {
		std::cout << artikelen[i].number << " ";
		std::cout << artikelen[i].name << " ";
		std::cout << artikelen[i].weight << " ";
		std::cout << artikelen[i].length << std::endl;
	}
	
}