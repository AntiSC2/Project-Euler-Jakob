//Copyright Jakob Sinclair 2015
#include <iostream>
#include <cmath>

int main() {
	int max = 100;
	long int sum = 0;
	long int square = 0;
	for(long int i = 1; i <= max; i++) {
		sum += pow(i, 2);
		square += i;
	}
	square = pow(square, 2);
	std::cout << square - sum << std::endl;
	return 0;
}
