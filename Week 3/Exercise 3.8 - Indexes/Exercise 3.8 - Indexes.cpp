// Schrijf een functie die gegeven de parameters charMatrix en c alle indexen teruggeeft
// waar c voorkomt in charMatrix. Je mag aannemen dat het aantal rijen en kolommen van
// de matrix gelijk zijn.

#include <iostream>
#include <vector>

std::vector<std::vector<int> > getIndexes (const std::vector<std::vector<char> > & charMatrix, const char & c) {
	std::vector<std::vector<int> > value;
	
	for (int i = 0; i < charMatrix.size(); i++) {
		for (int j = 0; j < charMatrix[i].size(); j++) {
			if (charMatrix[i][j] == c) {
				value.push_back({i,j});
			}
		}
	}
	
	return value;

}

int main () {
	std::vector<std::vector<char> > letters = {
	{ 'u', 'b', 'c', 'p' },
	{ 'f', 'b', 'y', 'u' },
	{ 't', 'u', 'u', 's' },
	{ 'x', 'u', 'w', 'q' }
	};
	
	std::vector<std::vector<int> > indexes = getIndexes(letters, 'u');
	std::cout << "there is a \'u\' at: ";

	for (unsigned int i = 0; i < indexes.size(); i++) {
		std::cout << "[" << indexes[i][0] << ", " << indexes[i][1] << "],";
	}
	
}
