// Schrijf een programma die de kortste instructies geeft naar de schat, zodat Arrrrr2D2 genoeg energie 
// heeft om de schat te bereiken. Split je programma op in minimaal 2 deelproblemen. Schrijf voor elk 
// deelprobleem een functie. Minimaal één van de functies moet recursief zijn. 

#include <iostream>
#include <vector>
#include <string>

// Deel probleem 1: Tel richtingen op.

int aantalNorth(const std::vector<std::string> & map, int size, int north = 0){
	if (size <= 0) {
		return north;
	}
	if (map[size-1] == "north") {
		return aantalNorth(map, size-1, north + 1);
	}
	else {
		return aantalNorth(map, size-1, north);
	}
	
}

int aantalEast(const std::vector<std::string> & map, int size, int east = 0){
	if (size <= 0) {
		return east;
	}
	if (map[size-1] == "east") {
		return aantalEast(map, size-1, east + 1);
	}
	else {
		return aantalEast(map, size-1, east);
	}
	
}

int aantalSouth(const std::vector<std::string> & map, int size, int south = 0){
	if (size <= 0) {
		return south;
	}
	if(map[size-1] == "south"){
		return aantalSouth(map, size-1, south + 1);
	}
	else {
		return aantalSouth(map, size-1, south);
	}
	
}

int aantalWest(const std::vector<std::string> & map, int size, int west = 0){
	if (size <= 0) {
		return west;
	}
	if (map[size-1] == "west") {
		return aantalWest(map, size-1, west + 1);
	}
	else {
		return aantalWest(map, size-1, west);
	}
	
}

// Deel probleem 2: Bereken korste route.

void richting(int north, int south, int east, int west) {
	if (north > south) {
		std::cout << "aantal keer noord: "	<< north - south << std::endl;
	}
	else {
		std::cout << "aantal keer zuid: " 	<< south - north << std::endl;
	}
	
	if (east > west) {
		std::cout 	<< "aantal keer oost: "	<< east - west << std::endl;
	}
	else {
		std::cout 	<< "aantal keer west: "	<< west - east << std::endl;
	}
	
}

int main () {
	std::vector<std::string> map = {
		"west", "west", "south", "south", "south", "west", "west", "west", "north", "north", 
		"north", "north", "north", "west", "west", "west", "west", "west", "west", "south", 
		"south", "south", "south", "east", "east", "east", "west", "west", "south", "south", 
		"south", "west", "west", "north", "north", "north", "north", "north", "north", "west", 
		"west", "west", "west", "west", "west", "south", "south", "south", "south", "east", 
		"east", "east", "north", "north", "north", "north", "north", "north", "north", "north", 
		"north", "north", "north", "east", "east", "east", "east", "east", "east", "east", "east", 
		"east", "south", "south", "south", "south", "south", "west", "west", "west", "east", "east", 
		"east", "east", "east", "east", "east", "east", "north", "west", "north", "north", "north", 
		"north", "north", "north", "north", "north", "north", "north"
	};
	
	int size = map.size();
	
	richting(aantalNorth(map, size), aantalSouth(map, size), aantalEast(map, size), aantalWest(map, size));

}
