// Exercise 1.6 - Character plus integer.

// Maak een programma dat om een character vraagt, inleest, en bij de char 32 optelt, de
// som afdrukt, de uitkomst afdrukt als integer en de uitkomst afdrukt als character.

#include <iostream>
using namespace std;

int main(){
	char character_user;
	cout << "Geef een character: ";
	cin >> character_user;
	
	cout << character_user << " + 32 = " << (char) character_user + 32 << "\n"; 

	cout << character_user << " + 32 = " << (int) character_user + 32 << "\n";
	
}
