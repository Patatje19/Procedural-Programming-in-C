// De onderstaande functie controleert of een string een palindroom is. Een palindroom is
// een woord dat hetzelfde blijft als je het woord omdraait. Voorbeelden van een palindroom
// zijn: kok, lepel, meetsysteem. De functie maakt gebruik van de functie reverse() die een
// string omdraait.

#include<iostream>
#include<string>

bool isPalindroom(const std::string & word){    
    int length = word.size();
	int value = 1;
    
    for(int i = 0; i < length; i++) {
        if (word[i] != word[length - i - 1]) {
            value = 0;
            break;
		}
	}
    
    return value;
	
} 
	
int main () {
	std::string woordA = "stekkerdoos";
	std::string woordB = "Halloween";
	std::string woordD = "flesje";
	std::string woordE = "bommelding";
	std::string woordC = "lepel"; 
	
	std::cout << isPalindroom(woordA);
	std::cout << isPalindroom(woordB);
	std::cout << isPalindroom(woordD);
	std::cout << isPalindroom(woordE);
	std::cout << isPalindroom(woordC);
	
}
