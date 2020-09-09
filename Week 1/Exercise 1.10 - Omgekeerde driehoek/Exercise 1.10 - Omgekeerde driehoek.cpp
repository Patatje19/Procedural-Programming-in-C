// Exercise 1.10 - Omgekeerde driehoek.

// Schrijf een programma dat een driehoek van variabele lengte afdrukt, zoals in het voorbeeld. Gebruik 
// while- of for-loops en druk ieder character apart af. De gebruiker geeft aan hoe groot de driehoek is.

#include <iostream>
using namespace std;

int main(){
	int hoe_groot;
	cout << "Hoe groot: ";
	cin >> hoe_groot;
	
	char symbol = '*';
	
	for(int row = hoe_groot; row >= 1; row--){
		for(int column = 1; column <= row; column++){
			cout << symbol;
		}
		cout << endl;
	}	
	
}
