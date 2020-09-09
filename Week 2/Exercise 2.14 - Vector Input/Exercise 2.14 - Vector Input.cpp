// Schrijf een programma dat de gebruiker vraagt om een reeks getallen in te voeren door
// steeds één getal te geven. Als de gebruiker een negatief getal geeft, dan is de reeks
// compleet. Stop de getallen in een vector. Het negatieve getal neem je niet mee in de
// vector.

#include<iostream>
#include<vector>
#include<algorithm>

bool isSorted (const std::vector<int> & numbers) {
	std::vector<int> sorted = numbers;
	std::sort(sorted.begin(), sorted.end());
	
	return sorted == numbers;

}
	
float minimum(const std::vector<int> & numbers) {     
	float min = numbers[0]; 

	for (int i = 1; i < numbers.size(); i++) {
		if (numbers[i] < min) {
			min = numbers[i]; 
		}
	}

	return min;
	
}

float average (const std::vector<int> & numbers) {
	int value = 0;
	
	for (int i = 1; i <= numbers.size(); i++ ) {
      value += numbers[i];
    }

	return value / numbers.size();
  
}
  
int main () {
	std::vector<int> userInput = {};
	int value = 0;
	
	while (value != -1) {
		std::cout << "geef een getal: ";
		std::cin >> value;
		
		userInput.push_back(value);
	}
	
	userInput.pop_back();
	
	if (isSorted(userInput) == 1) {
		std::cout << "De reeks is niet gesorteerd." << std::endl;
	}
	else {
		std::cout << "De reeks is wel gesorteerd." << std::endl;
	}
	
	std::cout << "De gemiddelde waarde is: " << average(userInput) << std::endl;
	
	std::cout << "De minium waarden is: " << minimum(userInput) << std::endl;
	
	std::cout << "De reeks bevat " << userInput.size() << " getallen" << std::endl;
		
}
