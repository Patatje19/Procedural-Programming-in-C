// De docenten willen een programma waarin ze overzichtelijk met de gegevens van studenten
// kunnen werken. Van elke student hebben we de volgende gegevens. Schrijf een struct waarin 
// de gegevens van een student in opgeslagen kunnen worden.

#import <iostream>
#import <string>
#import <vector>

struct studenten {
	std::string naam;
	int leeftijd;
	std::vector<int> cijfers;
	bool huisdier;
};

// De docenten willen in het programma ook kunnen werken met de gegevens van klassen. Van 
// elke klas hebben we de volgende gegevens. Voeg aan het programma een struct toe waarin 
// de gegevens van een klas kunnen worden opgeslagen.

struct klassen {
	std::string naamKlassen;
	std::vector<studenten> studenten;
	std::vector<std::string> docenten;
};

// De docenten willen makkelijk het gemiddelde cijfer van een klas kunnen opvragen. Schrijf 
// een functie die gegeven een klas het gemiddelde cijfer teruggeeft.

float average (std::vector<klassen> klasLijst, std::string klas, int value) {
	for (int i = 0; i < klasLijst.size(); i++) {
		if (klasLijst[i].naamKlassen == klas) {
			for (int i = 0; i < klasLijst[i].studenten.size(); i++) {
				studenten student = klasLijst[i].studenten[i];
					for (int i = 0; i < student.cijfers.size(); i++) {
						value += student.cijfers[i];
					}
				return value / student.cijfers.size();
				value = 0;
			}
		}
		else {
			return -1;
		}
	}
	
}

int main () {
	std::vector<int> cijfers1 = { 7, 6, 8, 9 };
	std::vector<int> cijfers2 = { 4, 8, 9, 3 };
	std::vector<int> cijfers3 = { 6, 2, 5, 8 };
	
	studenten student1 = { "Piet1", 21, cijfers1, false };
	studenten student2 = { "Piet2", 22, cijfers2, false };
	studenten student3 = { "Piet3", 23, cijfers3, false };
	
	klassen V1A = { "Vlinder1", { student1, student2, student3 }, { "Jaap1", "Jan1" } };
	klassen V1B = { "Vlinder2", { student1, student2, student3 }, { "Jaap1", "Jan2" } };
	klassen V1C = { "Vlinder3", { student1, student2, student3 }, { "Jaap1", "Jan3" } };
	
	std::vector<klassen> klasLijst = { V1A, V1B, V1C };
	
	std::string klas	= "";
	float value 		= 0;
	
	std::cout << "Vul klas in: " << std::endl;
	std::cin  >> klas;
	
	std::cout << "Gemiddelde: " << average(klasLijst, klas, value) << std::endl; 

}
