//Copyright Jakob Sinclair 2015
#include <iostream>

int main() {
	int terms = 1;
	int biggest_term = 0;
	int starting = 0;
	long long number = 0;
	for(int n = 999999; n > 1; n--) {
		number = n;
		while(number != 1) {
			if(number % 2 == 0) {
				number /= 2;
			} else {
				number *= 3;
				number += 1;
			}
			terms++;
		}
		if(terms > biggest_term) {
			biggest_term = terms;
			starting = n;
		}
		terms = 1;
	}

	std::cout << starting << std::endl << biggest_term;
}
