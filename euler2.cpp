//Copyright Jakob Sinclair 2015
#include <cmath>
#include <iostream>

int main() {
	int x = 1, y = 2, sum = 2;
	while((x < pow(10, 6) * 4) && (y < pow(10, 6) * 4)) {
		if(x < y) {
			x = x + y;
			if(x % 2 == 0) sum += x;
			std::cout << x << std::endl;
		} else {
			y = y + x;
			if(y % 2 == 0) sum += y;
			std::cout << y << std::endl;
		}
	}
	std::cout << sum << std::endl;
	return 0;
}
