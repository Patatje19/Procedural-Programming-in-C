// Schrijf een functie die het minimum in een vector<float> bepaalt en deze teruggeeft

#include <iostream>
#include <vector>
using namespace std;

float minimum(vector<float> numbers) {     
	float min = numbers[0]; 

	for (int i = 1; i < numbers.size(); i++) {
		if (numbers[i] < min) {
			min = numbers[i]; 
		}
	}

	return min;
	
} 

// Test of de functie werkt

int main () {
	vector<float> nummers{ 20, 40, 30, 10, 50 };
	
	cout << minimum(nummers);
	
}
