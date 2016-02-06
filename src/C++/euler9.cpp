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
#include <cmath>

int main() {
	for(int a = 1; a < 500; a++) {
		int aa = a * a;
		int b = a + 1;
		int c = b + 1;

		while(c < 500) {
			int cc = aa + b * b;
			while(c * c < cc) {
				c++;
			}
			if(c * c == cc && c < 500) {
				if(a + b + c == 1000) {
					std::cout << "A: " << a << std::endl
						  << "B: " << b << std::endl
						  << "C: " << c << std::endl
						  << "Sum: " << a + b + c << std::endl
						  << "Product: " << a * b * c << std::endl;
				}
			}
			b++;
		}
	}
	return 0;
}
