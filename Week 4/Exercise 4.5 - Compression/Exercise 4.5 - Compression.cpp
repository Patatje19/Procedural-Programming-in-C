// Schrijf een compress-programma, dat uit een gegeven bestand een nieuwe bestand maakt, waarbij 
// van iedere regel alle spaties en tabs aan het begin van de regel zijn verwijderd. Verder zijn 
// alle lege regels verwijderd.

#include <fstream>
#include <iostream>
#include <string>

void compress (std::string src_filename, std::string dest_filename) {
	std::ifstream source;
	std::ofstream destination;
	
	source.open(src_filename.c_str());
	destination.open(dest_filename.c_str());
	
	std::string line = "";
	
	while (source >> std::ws) {
		getline(source, line);
		
		if (!line.empty()) {
			destination << line << std::endl;
		}
		if (source.eof()) {
			break;
		}
	}
	
	source.close();
	destination.close();
	
}

int main () {
	std::string src	 = "";
	std::string dest = "";
	
	std::cout << "Source filename: ";
	std::cin  >> src;
	
	std::cout << "Destination filename: ";
	std::cin  >> dest;
	
	compress(src, dest);

}
