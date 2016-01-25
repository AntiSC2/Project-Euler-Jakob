//Copyright Jakob Sinclair 2015
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
