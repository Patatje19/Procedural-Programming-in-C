// Exercise 1.11 - Piramide - For-loop.

// Schrijf een programma dat een piramide van variabele lengte afdrukt, zoals in het voorbeeld. Druk 
// ieder character apart af. De gebruiker geeft aan hoe groot de piramide is.

// Implementeer je programma twee keer, de eerste keer met twee for loops, en daarna met twee while 
// loops. Beargumenteer welke variant jij mooier vindt.

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
		
	for(int row = hoe_groot - 1; row > 0; row--){
		for(int column = 0; column < row; column++){
			cout << symbol;
		}
		cout << endl;
	}
	
}
