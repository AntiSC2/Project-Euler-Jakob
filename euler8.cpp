//Copyright Jakob Sinclair 2015
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
