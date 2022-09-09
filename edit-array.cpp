#include <iostream>
#include <array>
using namespace std;

int main() {
	int myData [10];
	int index, value;

	for (int i = 0; i < 10; i++) {
		myData[i] = 1;
		cout << myData[i] << " ";
	}

	do {
		cout << "\n\nInput index: ";
		cin >> index;
		cout << "Input value: ";
		cin >> value;

		if (index > 9 || index < 0) {
			cout << "\nIndex out of range. Exit." << endl;
			break;
		}

		myData[index] = value;

		cout << endl;
		for (int i = 0; i < 10; i++) {
			cout << myData[i] << " ";
		}

	} while(index >=0 && index < 10);


	return 0;
}