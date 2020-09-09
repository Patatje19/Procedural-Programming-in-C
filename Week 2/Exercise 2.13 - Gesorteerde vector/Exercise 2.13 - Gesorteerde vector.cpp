// Schrijf een functie die van een gegeven vector<int> controleert of de getallen zijn
// gesorteerd van laag naar hoog. Bedenk zelf een goede naam voor de functie en wat de
// functie teruggeeft.

#include <algorithm>  
#include <iostream>
#include <vector>

bool isSorted (const std::vector<int> & numbers) {
	for (int i = 0; i < numbers.size() - 1; i++) {
		if (numbers[i] > numbers[i + 1]) {
			return false;
		}	
	}
	
	return true;
	
}

int main () {
	std::vector<int> A = { 1, 2, 3, 4 };
	std::vector<int> B = { 2, 3, 1, 4 };
	
	std::cout << isSorted(A) << isSorted(B);
	
}
