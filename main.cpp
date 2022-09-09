#include <iostream>
#include "funcs.h"

int main () {
	print_interval(-5, 10);
	std::cout << std::endl;

	print_interval(0, 100);
	std::cout << std::endl;

	print_interval(-100, 0);
	std::cout << std::endl;
	return 0;
}