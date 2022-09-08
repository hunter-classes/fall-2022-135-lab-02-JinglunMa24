#include <iostream>
using namespace std;

int main() {
	int inputN;

	cout << "Please enter an integer: ";
	cin >> inputN;

	while (inputN >= 100 || inputN <= 0) {
		cout << "Please re-enter: ";
		cin >> inputN;
	
	}

	cout << "\nNumber squared is " << inputN*inputN << endl;
	

	return 0;
}