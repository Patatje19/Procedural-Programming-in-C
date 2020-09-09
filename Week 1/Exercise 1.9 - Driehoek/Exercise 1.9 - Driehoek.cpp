// Exercise 1.9 - Driehoek.

// Schrijf een programma dat een driehoek van variabele lengte afdrukt, zoals in het voorbeeld. Gebruik 
// while- of for-loops en druk ieder character apart af. De gebruiker geeftaan hoe groot de driehoek is.

#include <iostream>
using namespace std;

int main(){
	int hoe_groot;
	cout << "Hoe groot: ";
	cin >> hoe_groot;
	
	char symbol = '*';
	
	for(int row = 1; row <= hoe_groot; row++){
		for(int column = 0; column < row; column++){
			cout << symbol;
		}
		cout << endl;
	}
	
}
