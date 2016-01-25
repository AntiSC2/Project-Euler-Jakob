//Copyright Jakob Sinclair 2015
#include <iostream>
#include <cmath>

long long int NumberOfDivisors(long long int number) {
	int nod = 0;
	int square = sqrt(number);

	for(int i = 1; i <= square; i++) {
		if(number % i == 0) {
			nod += 2;
		}
	}

	if(square * square == number) {
		nod--;
	}

	return nod;
}

int main() {
	long long int number = 0;
	int i = 1;
	while(NumberOfDivisors(number) < 500) {
		number += i;
		i++;
	}
	std::cout << number << std::endl;
	return 0;
}
