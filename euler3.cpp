//Copyright Jakob Sinclair 2015
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
