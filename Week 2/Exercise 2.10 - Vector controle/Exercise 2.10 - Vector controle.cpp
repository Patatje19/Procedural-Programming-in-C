// Schrijf een functie, die bepaalt of een gegeven integer-vector met alleen 1’en en 0’en aan
// de volgende eisen voldoet:

// Het aantal enen is groter dan aan het aantal nullen
// Er mogen niet meer dan 12 nullen zijn.

// Bedenk zelf wat het return type van deze functie moet zijn. Gebruik in je programma de
// functie count() die je hebt geschreven bij de vorige opgave.

#include <iostream>
#include <vector>
#include <algorithm>

bool ones_zeros (const std::vector<int> & numbers) {
	int zeros = std::count(numbers.begin(), numbers.end(), 0);
	int ones = std::count(numbers.begin(), numbers.end(), 1);
	
	return (ones > zeros) + (zeros <= 12);
	
}
	
int main () {
	std::vector<int> nummer = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1};
	
	std::cout << ones_zeros(nummer);
	
}
