// Schrijf een functie die van een gegeven vector<vector<int> > telt hoe vaak een gegeven
// getal voorkomt per kolom. Neem aan dat alle rijen even lang zijn.

#include <iostream>
#include <vector>

int countVector (const std::vector<std::vector<int> > & numbers, int count) {
	int value = 0;
	
	for (int i = 0; i < numbers.size(); i++) {
		for (int j = 0; j < numbers[i].size(); j++) {
			if (numbers[i][j] == count) {
				value++;
			}
		}
	}
	
	return value;
	
}

int main () {
	std::vector<std::vector<int> > randomNumbers = {
	{ 1, 1, 1, 4, 4, 4, 8, 8, 8 },
	{ 1, 1, 1, 4, 4, 4, 8, 8, 8 },
	{ 1, 1, 1, 4, 4, 4, 8, 8, 8 },
	{ 1, 1, 1, 4, 4, 4, 8, 8, 8 },
	{ 1, 1, 1, 4, 4, 4, 8, 8, 8 }
	};
	
	int count = countVector(randomNumbers, 4);
	
	std::cout << "Count of vector in vector is: " << std::endl;
	std::cout << "Nummer 4 komt " << count << "x voor!" << std::endl;

}
