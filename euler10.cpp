//Copyright Jakob Sinclair 2015
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