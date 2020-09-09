// Exercise 1.12 - Piramide met opvulling.

// Schrijf een programma dat een piramide van variabele lengte afdrukt, zoals in het voorbeeld. Gebruik 
// while- of for-loops en druk ieder character apart af. De gebruiker geeft aan hoe groot de piramide is.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int hoe_groot;
	cout << "Hoe groot: ";
	cin >> hoe_groot;
	
	char symbol = '*';
	
	for(int r = 1; r <= hoe_groot; r++){
		for(int i = 0; i < (hoe_groot - r); i++ ){
			cout << " ";
		}
		for(int i = 0; i < r; i++){
			cout << symbol;
		}
		cout << endl;
	}
	
	for(int row = hoe_groot - 1; row > 0; row--){
		for(int i = 0; i < (hoe_groot - row); i++){
			cout << " ";
		}
		for(int column = 0; column < row; column++){
			cout << symbol;
		}
		cout << endl;
	}
		
}
