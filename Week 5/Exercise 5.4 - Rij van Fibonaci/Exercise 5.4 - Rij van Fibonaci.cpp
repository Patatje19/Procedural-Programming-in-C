// De rij van Fibonacci is genoemd naar Leonardo van Pisa, bijgenaamd Fibonacci, die de
// rij noemt in zijn boek Liber abaci uit 1202. De rij begint met 0 en 1 en vervolgens is elk
// volgende element van de rij steeds de som van de twee voorgaande elementen.

#include <iostream>

int fibonaciCalc (unsigned int Fn) {
	if (Fn == 0 || Fn == 1) {
		return Fn;
	}
	
	return fibonaciCalc(Fn-1) + fibonaciCalc(Fn-2);
	
}

int main () {
	std::cout << fibonaciCalc(0) << std::endl;
	std::cout << fibonaciCalc(1) << std::endl;
	std::cout << fibonaciCalc(5) << std::endl;
	std::cout << fibonaciCalc(9) << std::endl;
	
}