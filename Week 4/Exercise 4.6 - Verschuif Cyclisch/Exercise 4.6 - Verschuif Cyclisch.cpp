// Schrijf een functie met twee parameters. 

// De eerste parameter, uint8_t, is een character. De tweede parameter, n, geeft aan 
// hoeveel posities de bitjes van uint8_t opgeschoven moeten worden. Als n > 0 is dan 
// worden de bitjes naar links geschoven. Als n < 0 is dan worden de bitjes naar rechts 
// geschoven. 

// De bitjes die wegvallen worden aan de andere kant van de byte weer teruggeplaatst.

#include <iostream>
#include <limits.h>
#include <bits/stdc++.h> 

uint8_t bitMover (uint8_t character, int n) {
	if (n > 0) {
		const unsigned int mask = CHAR_BIT * sizeof(character) - 1;
		n &= mask;
	
		return (character << n) | (character >> (-n & mask));
	}
	else {
		const unsigned int mask = CHAR_BIT * sizeof(character) - 1;
		n &= mask;
	
		return (character >> n) | (character << (-n & mask));
	}
	
	return -1;
	
}

int main () {
	uint8_t character1	= 'A';
	uint8_t character2	= 'a';
	uint8_t character3	= 'B';	
	uint8_t character4	= 'b';
	
	int numberPos = 4;
	int numberNeg = -4;
	
	std::cout << std::bitset<8>(bitMover(character1, numberPos)) << std::endl;
	std::cout << std::bitset<8>(bitMover(character2, numberPos)) << std::endl;
	std::cout << std::bitset<8>(bitMover(character3, numberPos)) << std::endl;
	std::cout << std::bitset<8>(bitMover(character4, numberPos)) << std::endl;
	
	std::cout << std::bitset<8>(bitMover(character1, numberNeg)) << std::endl;
	std::cout << std::bitset<8>(bitMover(character2, numberNeg)) << std::endl;
	std::cout << std::bitset<8>(bitMover(character3, numberNeg)) << std::endl;
	std::cout << std::bitset<8>(bitMover(character4, numberNeg)) << std::endl;

}	