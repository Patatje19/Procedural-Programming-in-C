// Schrijf een functie die de eerste index teruggeeft waarop twee strings een verschillende
// waarde hebben. Bedenk zelf een goede functienaam. Het complete programma vraagt om twee 
// strings aan de gebruiker en print de index waarop deze twee strings verschillen. Zorg je 
// dat de functie goed test. Let op: een string mag spaties bevatten!

#include <iostream>
#include <string>
using namespace std;

int index (const string & string1, const string & string2) {
	int max_string = max(string1.size(), string2.size());
	
	for (int i = 0; i < max_string; i++) {
 		if (string1[i] != string2[i]) {
			return i;
		}
	}
	
	return -1;
	
}

// Test of de functie werkt

int main () {
	string input1;
	string input2;
	
	cout << "Geef een string: ";
	getline (cin, input1);
	
	cout << "Geef een string: ";
	getline (cin, input2);
	
	cout << index(input1, input2);
	
}
