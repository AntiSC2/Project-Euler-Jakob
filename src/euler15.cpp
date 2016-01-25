//Copyright Jakob Sinclair

#include <iostream>
#include <cmath>

long long int factorial(long long int n)
{
	long long int i = n - 1;
	while (i > 1) {
		n *= i--;
	}
	return n;
}

long long int paths()
{
	long long int n;
	long long int k;
	while (k > 1 && k < n - 1) {
		
	}
	return n / factorial(20);
}

int main()
{
	std::cout << paths() << std::endl;	
	return 0;
}
