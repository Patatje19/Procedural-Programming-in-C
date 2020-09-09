// Schrijf een functie met de parameters uint8_t b en integer n. De functie geeft de bitwaarde (een 1 of 
// een 0) terug van het n-de bitje van b. De bits zijn genummerd van rechts naar links en we beginnen 
// te tellen met 0.

#include <vector>
#include <bitset>
#include <iostream>

int getBit (uint8_t b, int n) {
	uint8_t mask = 0;
	
	mask |= (1 << n);
	mask &= b;
	
	return mask == b;
	
}  

int main () {
	uint8_t byte_comp = 'A';
	int which_place = 4;

	std::cout << getBit(byte_comp, which_place);
	
}
