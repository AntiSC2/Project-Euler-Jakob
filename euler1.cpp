//Copyright Jakob Sinclair 2015
#include <iostream>

bool div(int i) {
	return (i % 5 == 0 || i % 3 == 0);
}

int main() {
	const int max_size = 1000;
	int sum = 0;
	for(int i = 0; i < 1000; i++) {
		if(div(i)) sum += i;
	}
	std::cout << sum << std::endl;
	return 0;
}
