// Schrijf een functie die van een gegeven vector<int> het gemiddelde berekent en teruggeeft.

#include <iostream>
#include <vector>

float calc_average (std::vector<int> & number) {
	float value = 0;
	
	for (int i = 0; i < number.size(); i++) {
		value += number[i];
	}
	
	return value / number.size();
	
}

int main () {
	std::vector<int> average = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	std::cout << calc_average(average);
	
}
