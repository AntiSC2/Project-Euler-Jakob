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
