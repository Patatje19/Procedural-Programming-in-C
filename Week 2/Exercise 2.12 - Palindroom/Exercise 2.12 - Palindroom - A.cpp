// De onderstaande functie controleert of een string een palindroom is. Een palindroom is
// een woord dat hetzelfde blijft als je het woord omdraait. Voorbeelden van een palindroom
// zijn: kok, lepel, meetsysteem. De functie maakt gebruik van de functie reverse() die een
// string omdraait.

#include<iostream>
#include<string>

void reverse (std::string & stringA) {
	for (int i = 0; i < stringA.size() / 2; i++) {
		char value = stringA[stringA.size() - i];
		
		stringA[stringA.size() - i] = stringA[i - 1];
		stringA[i - 1] = value;
	}
	
}
	
bool isPalindroom(const std::string & word){
	std::string orginalWord = word;
	reverse(orginalWord);

	for(unsigned int i = 0; i < word.size(); i++) {
		if(word[i] != orginalWord[i]){
			return false;
		}
	}

	return true;
	
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
