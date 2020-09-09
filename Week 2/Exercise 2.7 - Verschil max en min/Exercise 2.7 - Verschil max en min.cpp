// Schrijf een functie die het verschil tussen het maximum en het minimum van een vector<int> 
// berekent en deze teruggeeft.

#import <iostream>
#import <vector>
using namespace std;

int max_min (vector<int> numbers) {
	int min = numbers[0]; 
	int max = numbers[0];

	for (int i = 1; i < numbers.size(); i++) {
		if (numbers[i] < min) {
			min = numbers[i]; 
		}
		
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}
	
	return max - min;
	
}

// Test of de functie werkt

int main () {
	vector<int> nummers{ 20, 40, 30, 10, 50 };
	
	cout << max_min(nummers);
	
}
