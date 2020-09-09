// Schrijf een functie die van een gegeven vector<vector<float> > de som per rij berekent
// en teruggeeft.

#include <iostream>
#include <vector>

std::vector<std::vector<float> > sumVector (const std::vector<std::vector<float> > & numbers) {
	float value = 0;
	std::vector<std::vector<float> > calcVector;
	
	for (int i = 0; i < numbers.size(); i++) {
		for (int j = 0; j < numbers[i].size(); j++) {
			value += numbers[i][j];	
		}
		calcVector.push_back({value});
		value = 0;
	}
	
	return calcVector;
	
}

int main () {
	std::vector<std::vector<float> > randomNumbers = {
	{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },
	{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },
	{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },
	{ 1, 2, 3, 4, 5, 6, 7, 8, 9 },
	{ 1, 2, 3, 4, 5, 6, 7, 8, 9 }
	};
	
	std::vector<std::vector<float> > sum = sumVector(randomNumbers);
	std::cout << "Sum of vector in vector is: " << std::endl;

	for (unsigned int i = 0; i < sum.size(); i++) {
		std::cout << sum[i][0] << std::endl;
	}

}
