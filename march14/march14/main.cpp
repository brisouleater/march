#include <iostream>
using namespace std;
int main() {
	int num1 = 0;
	int input;
	cout << "3  nums pls" << endl;

	for (int j = 0; j < 3; j++) {
		cin >> input;
		if (input > num1) {
			num1 = input;
		}

	}

cout << "your biggest number is" << num1 << num1 << "." << endl;

}