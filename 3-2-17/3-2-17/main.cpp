#include <iostream>
#include <Windows.h>
#include <iostream>
using namespace std;
int input;

void crunching(int sound);

int main() {
	int input;

	cout << "how many sound do you wanna play?" << endl;
	cin >> input;
	crunching(input);
}

void crunching(int sound) {
	for (int j = 0;j < sound; j++){
	PlaySound(TEXT("whale.wav"), NULL, SND_FILENAME);



}
}