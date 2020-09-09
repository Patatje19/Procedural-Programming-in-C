// Exercise 1.8 - Rechthoek.

// Schrijf een programma dat een rechthoek van variabele lengte afdrukt, zoals in het
// voorbeeld. Gebruik while- of for-loops en druk ieder character apart af. De gebruiker
// geeft aan hoe groot de rechthoek is.

#include <iostream>
using namespace std;

int main(){
	int hoe_groot;
	cout << "Hoe groot: ";
	cin >> hoe_groot;
	
	char symbol = '*';
	int row = hoe_groot;
	int column = hoe_groot;
	
	for (int i = 1; i <= column; i++){
        for (int x = 1; x <= row; x++){
            cout << symbol;
        }
        cout << endl;
    }
	
}
