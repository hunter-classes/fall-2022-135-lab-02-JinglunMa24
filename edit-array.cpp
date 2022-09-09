#include <iostream>
#include <array>

int main() {
	int myData [10];
	int index, value;

	for (int i = 0; i < 10; i++) {
		myData[i] = 1;
		std::cout << myData[i] << " ";
	}

	do {
		std::cout << "\n\nInput index: ";
		std::cin >> index;
		std::cout << "Input value: ";
		std::cin >> value;

		if (index > 9 || index < 0) {
			std::cout << "\nIndex out of range. Exit." << std::endl;
			break;
		}

		myData[index] = value;

		std::cout << endl;
		for (int i = 0; i < 10; i++) {
			std::cout << myData[i] << " ";
		}

	} while(index >=0 && index < 10);


	return 0;
}