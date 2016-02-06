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
#include <set>

int main(int argc, char** argv) {
	std::vector<long int> numbers;
	std::vector<long int> prime_numbers;
	std::set<long int> not_prime;
	const long int max = 2000000;
	for(long int i = 2; i < max; i++) {
		numbers.push_back(i);
	}
	for(long int p = 2; p < max;) {
		prime_numbers.push_back(p);
		if(prime_numbers[prime_numbers.size() - 1] > 2000000) {
			prime_numbers.pop_back();
			break;
		}
		for(long int i = p * 2; i < max; i += p) {
			not_prime.insert(i);
		}
		if(p == 2) {
			p = 3;
		} else {
			p += 2;
		}
		while(not_prime.find(p) != not_prime.end()) {
			p += 2;
		}
	}
	long long int sum = 0;
	for(auto v : prime_numbers) {
		sum += v;
	}
	std::cout << sum << std::endl;
	return 0;
}
