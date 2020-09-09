// Schrijf de functie sumVectoren die twee float-vectoren meekrijgt. Bedenk zelf aan de
// hand van de functienaam wat de functie doet en wat hij teruggeeft. Er zijn meerdere
// goede antwoorden mogelijk.

// Mijn functie berekent het totaal van 2 vectoren

#include <iostream>
#include <vector>

float sumVector (const std::vector<float> & countA, const std::vector<float> & countB) {
	int valueA = 0;
	int valueB = 0;
	
	for (int i = 0; i < countA.size(); i++) {
		valueA += countA[i];
	}
	
	for (int i = 0; i < countB.size(); i++) {
		valueB += countB[i];
	}
	
	return valueA + valueB;
	
}

int main () {
	std::vector<float> vectorA = { 1, 2, 3, 4 };
	std::vector<float> vectorB = { 1, 2, 3, 4 };
	
	std::cout << sumVector(vectorA, vectorB);
	
}
