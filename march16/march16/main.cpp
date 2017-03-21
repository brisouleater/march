#include<iostream>
#include<ctime>
using namespace std;
int main() {
	srand(time((NULL);
	float avg = 0;
	int max = 0;
	for (float i = 0;i <= 100;i++) {
		float num = rand() % 1000 + 1;
		cout << num << endl;
		avg = avg + num;
		if (num > max) {
			max = num;
		}
	}

	avg = avg / 100;
	cout << "average is" << avg << endl;
	cout << "the max is" << max << endl;
}