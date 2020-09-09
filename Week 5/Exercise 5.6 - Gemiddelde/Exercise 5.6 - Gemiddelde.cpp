// Schrijf een recursieve functie die van een vector<int> het gemiddelde uitrekent. Neem
// aan dat de vector die de functie meekrijgt minimaal één element heeft.

#include <iostream>
#include <vector>

float averageCalc (std::vector<int> average, int size, float value = 0.0) {
	if (size <= 0) {
		return value / average.size();
	}
	
	value += average[size - 1];
	
	return averageCalc(average, size - 1, value);

}
	
int main () {
	std::vector<int> numbers1 = { 5, 6, 8, 2, 4 };
	std::vector<int> numbers2 = { 6, 9, 5, 1, 3 };
	std::vector<int> numbers3 = { 2, 1, 4, 2, 8 };
	
	std::cout << averageCalc(numbers1, numbers1.size()) << std::endl;
	std::cout << averageCalc(numbers2, numbers2.size()) << std::endl;
	std::cout << averageCalc(numbers3, numbers3.size()) << std::endl;
	
}
