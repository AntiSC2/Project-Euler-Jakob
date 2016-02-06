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
#include <string>
#include <cmath>
#include <vector>

bool check_prime(int num) {
	for(int i = 2; i < num; i++) {
		if(num % i == 0) {
			return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	long int value = 0;
	std::vector<long int> prime_factors;
	if(argc != 2) {
		std::cout << "Needs exactly 1 argument!" << std::endl;
		return 1;
	} else {
		std::string temp = argv[1];
		int power = 0;
		for(int i = temp.size() - 1; i >= 0; i--) {
			long int add = temp[i] - 48;
			add = add * pow(10, power);
			power++;
			value += add;
		}
	}
	
	if(value < 2) {
		std::cout << "The number needs to be larger than 1!" << std::endl;
		return 2;
	} else {
		long int temp = value;
		for(long int i = 2; i < temp / 2 + 1; i++) {
			if(i * i > temp) break;
			while(temp % i == 0) {
				prime_factors.push_back(i);
				temp /= i;
			}
		}
		if(temp > 1) {
			prime_factors.push_back(temp);
		}
	}
	
	for(int i = 0; i < prime_factors.size(); i++) {
		std::cout << prime_factors[i] << ' ' << std::endl;
	}

	return 0;
}
