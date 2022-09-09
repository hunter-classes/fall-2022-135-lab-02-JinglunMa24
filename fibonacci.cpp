#include <iostream>

int main() {
	int fib[60];

	fib[0] = 0;
	fib[1] = 1;

	std::cout << fib[0] << std::endl << fib[1] << std::endl;

	for (int i = 2; i < 60; i++) {
		fib[i] = fib[i-1] + fib[i-2];
		
		std::cout << fib[i] << std::endl;
	}

	return 0;
}


// I found that as the number gets larger to the 1836311903, the next number became negative.
// I think it is because the c++ has the limit of the greatest number so it would become the least number after it pass the top limit. (Just guessing :))