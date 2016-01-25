//Copyright Jakob Sinclair 2015
#include <iostream>

int main(int argc, char** argv) {
	int max = 20;
	int value = 2520;
	for(int i = 2; i <= max; i++) {
		if(value % i != 0) {
			value++;
			i = 2;
		}
	}
	std::cout << value << std::endl;
	return 0;
}
