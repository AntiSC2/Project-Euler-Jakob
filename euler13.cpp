//Copyright Jakob Sinclair 2015
#include <iostream>
#include <vector>
#include <deque>

int main() {
	std::vector<std::vector<int> > Vectors;
	char c = '0';
	for(int i = 0; i < 100; i++) {
		std::vector<int> temp;
		for(int i = 0; i < 50; i++) {
			std::cin.get(c);
			if(c > 47 && c < 58) {
				temp.push_back(c - 48);
			} else {
				i--;
			}
		}
		Vectors.push_back(temp);
	}

	if(std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	int n = 0;
	int rest = 0;
	std::deque<int> final_number;
	for(int x = 49; x >= 0; x--) {
		n = 0;
		n += rest;
		rest = 0;
		for(int y = 0; y < 100; y++) {
			n += Vectors[y][x];
			while(n >= 10) {
				n -= 10;
				rest++;
			}
		}
		final_number.push_front(n);
	}
	final_number.push_front(rest);

	for(int i = 0; i < 10; i++) {
		std::cout << final_number[i];
	}

	return 0;
}
