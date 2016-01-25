//Copyright Jakob Sinclair 2015
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <string>

int main(int argc, char** argv) {
	std::vector<std::vector<int>> grid;
	long int number = 1;
	long int biggest_number = 0;
	std::string raw = argv[1];;
	
	for(int y = 0; y < 20; y++) {
		std::vector<int> line;
		for(int x = 0; x < 20; x++) {
			line.push_back(atoi(argv[y * 20 + x]));
		}
		grid.push_back(line);
	}

	for(int y = 0; y < 20; y++) {
		for(int x = 0; x < 20; x++) {
			if(x < 16) {
				//Horizontal
				number = 1;
				for(int z = x; z < x + 4; z++) {
					number *= grid[y][z];
				}
				if(number > biggest_number) {
					biggest_number = number;
				}
			}
			if(y < 16) {
				//Vertical
				number = 1;
				for(int z = y; z < y + 4; z++) {
					number *= grid[z][x];
				}
				if(number > biggest_number) {
					biggest_number = number;
				}
			}
			if(y < 16 && x < 16) {
				//Diagonal right
				number = 1;
				for(int z = 0; z < 4; z++) {
					number *= grid[y + z][x + z];
				}
				if(number > biggest_number) {
					biggest_number = number;
				}
			}
			if(y < 16 && x >= 4) {
				//Diagonal left
				number = 1;
				for(int z = 0; z < 4; z++) {
					number *= grid[y + z][x - z];
				}
				if(number > biggest_number) {
					biggest_number = number;
				}
			}

		}
	}

	std::cout << biggest_number << std::endl;
	for(auto v : grid) {
		std::cout << v[0] << std::endl;
	}

	return 0;
}
