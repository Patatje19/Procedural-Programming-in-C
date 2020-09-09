// Schrijf een functie die de getransponeerde matrix van de opstelling kan berekenen. Een
// getransponeerde matrix is een matrix gespiegeld is over zijn hoofddiagonaal. Met andere
// woorden, de functie moet van matrix m element m[i][j] verwisselen met element m[j][i].

// De functie moet ook werken voor andere matrixen, maar je mag aannemen dat de
// kolommen even lang zijn als de rijen. Laat het programma de getransponeerde matrix
// afdrukken.

#include <iostream>
#include <vector>

void transpose(std::vector<std::vector<int> > & matrix) {
	for(int i = 0; i < matrix.size(); i++) {
		for(int j = i + 1; j < matrix[i].size(); j++) {
			int value = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = value;
		}
	}
}

int main () {
	std::vector<std::vector<int> > team = { 
	{ 1,2,3 },
	{ 4,5,6 },
	{ 7,8,9 }
	};
	
	transpose(team);
	
	for (int i = 0; i < team.size(); i++) {
		for (int j = 0; j < team[i].size(); j++) {
			std::cout << team[i][j] << ", ";
		}
		std::cout << std::endl;
	}
}
