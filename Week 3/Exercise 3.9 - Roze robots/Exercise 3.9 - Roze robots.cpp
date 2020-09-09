// Arjen heeft een crush op een Noorse robot. Het enige probleem is dat de robot hem niet 
// leuk vindt. Arjen gaat haar stalen hart winnen door te communiceren met de robot. Jammer 
// genoeg kan dit alleen in bitpatronen. Helaas zijn de binaire pick-up lines van Arjen dermate 
// tragisch dat het beter is dat er ruis wordt doorgestuurd. De boodschappen van Arjen zijn 
// altijd 8 bits, kies steeds drie willekeurige bits die je inverteert om te zorgen dat het 
// signaal onbegrijpbaar wordt voor de Noorse robot. Gebruik voor het kiezen van een willekeurige 
// bit de functie rand() van de library stdlib.h. 

#include <iostream>
#include <bits/stdc++.h> 
#include <stdlib.h>

void improveLoveMessage (uint8_t & message) {
	int position1 = rand() % 7 + 1;
	int position2 = rand() % 7 + 1;
	int position3 = rand() % 7 + 1;
	
	uint8_t mask1 = 1 << position1;	
	uint8_t mask2 = 1 << position2;	
	uint8_t mask3 = 1 << position3;

	message ^= mask1;
	message ^= mask2;
	message ^= mask3;
}
	
int main() {
	uint8_t loveMessage = 0xf0;
	
	improveLoveMessage(loveMessage);
	std::cout << std::bitset<8>(loveMessage) << std::endl;
}
