//Copyright Jakob Sinclair 2015
#include <string>
#include <iostream>

bool palindrome(int x, int y) {
	int v = x * y;
	std::string s = std::to_string(v);
	for(int i = 0; i < s.size(); i++) {
		if(s[i] != s[s.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	int largest_number = 0;

	for(int i = 999; i >= 100; i--) {
		for(int x = 999; x >= 100; x--) {
			if(i * x > largest_number) {
				if(palindrome(i, x) == true) {
					largest_number = i * x;
				}
			}
		}
	}
	std::cout << largest_number << std::endl;
}
