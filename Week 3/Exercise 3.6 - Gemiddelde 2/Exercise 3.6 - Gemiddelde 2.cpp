// Schrijf een functie die van een gegeven vector<vector<int> > het gemiddelde berekent
// van de gehele vector<vector<int> > en teruggeeft.

#include <iostream>
#include <vector>

float calc_average (std::vector<std::vector<int> > & number) {
	float itterator = 0;
	float value = 0;
	
	for (int i = 0; i < number.size(); i++) {
		for (int j = 0; j < number[i].size(); j++) {
			value += number[i][j];
			itterator++;
		}
	}
	
	return value / itterator;
	
}

int main () {
	std::vector<std::vector<int> > average = { 
	{ 1, 2, 3, 4, 5, 6, 7, 8, 9 }, 
	{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },
	{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },
	{ 1, 2, 3, 4, 5, 6, 7, 8, 9 }
	};
	
	std::cout << calc_average(average);
	
}
