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

int main(int argc, char** argv) {
	long long int biggest_product = 0;
	long long int product = 0;
	std::vector<int> big_number;
	if(argc == 2) {
		for(int i = 0; i < 1000; i++) {
			int x = argv[1][i] - 48;
			big_number.push_back(x);
		}
		for(int i = 0; i < 987; i++) {
			product = 0;
			product += big_number[i];
			for(int x = i + 1; x < i + 13; x++) {
				product *= big_number[x];
			}
			if(product > biggest_product) {
				biggest_product = product;
			}
		}
	}
	std::cout << biggest_product << std::endl;

	return 0;
}
