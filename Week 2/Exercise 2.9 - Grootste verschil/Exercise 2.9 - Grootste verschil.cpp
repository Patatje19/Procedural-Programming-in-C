// Schrijf een functie die gegeven een vector<float> het grootste verschil tussen twee op
// een volgende getallen bepaalt.

#include <iostream>
#include <vector>
using namespace std;

float opposing_numbers (const vector<float> & numbers) {
	float ground_difference;
	float difference;
	
	float value = numbers[0];
	
	for (unsigned int i = 0; i < numbers.size(); i++) {
		if ( value > numbers[i] ) {
			difference = value - numbers[i];
		}
		else {
			difference = numbers[i] - value;
		}
		if ( ground_difference < difference ) {
			ground_difference = difference;
		}
		value = numbers[i];
	}
	
	return ground_difference;
			
}

int main () {
	vector<float> nummers{ 20, 40, 30, 10, 50 };
	
	cout << opposing_numbers(nummers);
	
}
