// Een doolhof is gepresenteerd als een matrix (een vector van integer vectoren), waarbij
// 0 een veilige plek aangeeft, 1 het einddoel aangeeft en -1 muren en boze eekhoorns
// aangeeft. Schrijf een functie die de matrix met de waarden 1, 0 en -1 afdrukt. Waarbij 
// de -1 wordt afgedrukt als een ’x’. De matrix:

#include <iostream>
#include <vector>

void printMaze (std::vector<std::vector<int> > & maze) { 
	for (int i = 0; i < maze.size(); i++) {
		for (int j = 0; j < maze[i].size(); j++) {
			if (maze[i][j] == -1) {
				std::cout << 'x';
			} 
			else {
				std::cout << maze[i][j];
			}
		}
		std::cout << std::endl;
	}

}
 
int main () {
	std::vector<std::vector<int> > maze = { 
		{-1, 0,-1,-1,-1,-1,-1,-1,-1,-1,-1},
		{-1, 0,-1, 0, 0, 0,-1,-1, 0,-1,-1},
		{-1, 0,-1, 0,-1,-1,-1, 0, 0, 1,-1},
		{-1, 0, 0, 0, 0, 0, 0, 0,-1,-1,-1},
		{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}
	};

	printMaze(maze);
	
}
	