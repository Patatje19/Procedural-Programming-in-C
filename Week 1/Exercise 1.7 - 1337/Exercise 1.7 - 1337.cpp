// Exercise 1.7 - 1337.

// Wim, docent aardrijkskunde, heeft problemen met de communicatie met zijn studenten. Volgens zijn manager 
// komt dat doordat Wim en de leerlingen beide een andere taal spreken. Wim snapte niet wat zijn manager 
// bedoelde, maar na wat googlen vond hij 1337-speak. Wim is nog maar een noob, dus help hem door een vertaal
// programma te schrijven.

// Het programma vraagt de gebruiker om invoer. Vervolgens wordt de invoer afgedrukt, maar met de volgende 
// aanpassingen:

// Elke ’e’ wordt afgedrukt als ’3’
// Elke ’l’ wordt afgedrukt als ’1’
// Elke ’t’ wordt afgedrukt als ’7’
// Elke ’o’ wordt afgedrukt als ’0’
// Elke andere letter wordt afgedrukt als hoofdletter

// Uiteraard mag je de vertaling nog meer haxor maken. Gebruik niet de C++ functies toupper(), transform() en replace()

#include <iostream>
#include <string>
using namespace std;

int main(){
	string user_input;
	cout << "Geef een string om te vertalen: ";
	getline(cin, user_input);
	
	for(unsigned int i = 0; i < user_input.size(); i++){
		if(user_input[i] >= 'a' && user_input[i] <= 'z'){
			user_input[i] = user_input[i] - 32;
		}
		if(user_input[i] == 'E'){
			user_input[i] = '3';
		}
		if(user_input[i] == 'L'){
			user_input[i] = '1';
		}
		if(user_input[i] == 'T'){
			user_input[i] = '7';
		}
		if(user_input[i] == 'O'){
			user_input[i] = '0';	
		}		
	}
	
	cout << "1337-speak: \n";
	cout << user_input;
	
}
