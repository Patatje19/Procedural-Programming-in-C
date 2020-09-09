// Schrijf een recursieve functie die van een vector<float> de maximale waarde bepaalt. Neem 
// aan dat de vector die de functie mee krijgt minimaal één element heeft.

#include <iostream>
#include <vector>

float findMax (std::vector<float> max) {
	if (max.size() == 1) {
        return max[0];
    }
	else if (max[0] >= max[1]) {
		max.erase(max.begin() + 1);
	}
	else {
		max.erase(max.begin());
	}
	
	return findMax(max);
	
}

int main () {
	std::vector<float> numbers1 = { 5, 6, 8, 2, 4 };
	std::vector<float> numbers2 = { 6, 9, 5, 1, 3 };
	std::vector<float> numbers3 = { 2, 1, 4, 2, 8 };
	
	std::vector<float> numbers4 = { 100, 200, 300, 150, 100 };
	std::vector<float> numbers5 = { 200, 300, 400, 250, 200 };
	std::vector<float> numbers6 = { 300, 400, 500, 350, 300 };
	
	std::cout << findMax(numbers1) << std::endl;
	std::cout << findMax(numbers2) << std::endl;
	std::cout << findMax(numbers3) << std::endl;
	
	std::cout << findMax(numbers4) << std::endl;
	std::cout << findMax(numbers5) << std::endl;
	std::cout << findMax(numbers6) << std::endl;
	
}
