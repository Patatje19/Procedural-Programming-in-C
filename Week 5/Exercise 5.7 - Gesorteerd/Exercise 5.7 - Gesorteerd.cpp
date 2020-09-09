// Schrijf een recursieve functie die controleert of een vector<float> gesorteerd is van laag
// naar hoog. Neem aan dat de vector die de functie meekrijgt minimaal één element heeft.

#include <iostream>
#include <vector>

bool sortedCalc (std::vector<float> sorted, int size) {
	if (size <= 0) {
		return true;
	}
	if (sorted[size-2] > sorted[size-1]){
		return false;
	}
	else {
		return sortedCalc(sorted, size-1);
	}
	
}

int main () {
	std::vector<float> numbers1 = { 1, 2, 3, 4, 8, 8, 22, 50 };
	std::vector<float> numbers2 = { 1, 4, 3, 4, 8, 8, 22, 50 };
	std::vector<float> numbers3 = { 1, 2, 3, 4, 8, 8, 22, 50 };
	std::vector<float> numbers4 = { 1, 2, 3, 4, 8, 5, 22, 50 };
	
	std::cout << sortedCalc(numbers1, numbers1.size()) << std::endl;
	std::cout << sortedCalc(numbers2, numbers1.size()) << std::endl;
	std::cout << sortedCalc(numbers3, numbers1.size()) << std::endl;
	std::cout << sortedCalc(numbers4, numbers1.size()) << std::endl;

}
