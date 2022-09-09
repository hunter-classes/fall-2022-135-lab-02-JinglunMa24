#include <iostream>

int main() {
	int inputN;

	std::cout << "Please enter an integer: ";
	std::cin >> inputN;

	while (inputN >= 100 || inputN <= 0) {
		std::cout << "Please re-enter: ";
		std::cin >> inputN;
	
	}

	std::cout << "\nNumber squared is " << inputN*inputN << std::endl;
	

	return 0;
}