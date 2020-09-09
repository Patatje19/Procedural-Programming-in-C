// Exercise 1.11 - Piramide - While-loop.

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
	
	int row = 1;
	int column = 0;
	
	while(row < hoe_groot){
	    column = 0;
		while(column < row){
			cout << symbol;
			column++;
		}
		cout << endl;
		row++;
	}
	
	while(row > 0){
		column = 0;
		while(column < row){
			cout << symbol;
			column++;
		}
		cout << endl;
		row--;
	}
						
}
