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

bool palindrome(int x, int y) {
	int v = x * y;
	std::string s = std::to_string(v);
	for(int i = 0; i < s.size(); i++) {
		if(s[i] != s[s.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	int largest_number = 0;

	for(int i = 999; i >= 100; i--) {
		for(int x = 999; x >= 100; x--) {
			if(i * x > largest_number) {
				if(palindrome(i, x) == true) {
					largest_number = i * x;
				}
			}
		}
	}
	std::cout << largest_number << std::endl;
}
