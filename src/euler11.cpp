/*
The MIT License (MIT)

Copyright (c) 2016 Jakob Sinclair

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
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
