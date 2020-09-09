// Herschrijf deze functie zodat hij niet de index van de laatste 8 uit de vector<int> teruggeeft,
// maar de index van eerste 8 in de vector<int> teruggeeft. Doe dit door enkel regel 5, 6 en
// 7 aan te passen

#include <vector>
#include <iostream>
using namespace std;

int getIndex8(const vector<int> & numbers){
	for(unsigned int i = 0; i < numbers.size(); i++){
		if(numbers[i] == 8){
			return i;
		}
	}
	
	return -1;
}

int main(){
	vector<int> n = {37, 8, 7, 15, 8, 2, 8, 5};
	int index = getIndex8(n);
	
	cout << "There is a 8 at index: " << index << "\n";
}
	