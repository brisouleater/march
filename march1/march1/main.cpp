#include <Windows.h>
#include <iostream>
using namespace std;

void jukepickles(int sound);

int main() {
	int input;

	cout << "Which sound do you wanna play?" << endl;
	cout << "sound 1? or sound 2?" << endl;
	cin >> input;
	jukepickles(input);
}

void jukepickles(int sound) {
	switch (sound) {
	case 1:
		PlaySound(TEXT("whale.wav"), NULL, SND_FILENAME);
		break;
	case 2:
		PlaySound(TEXT("whale2.wav"), NULL, SND_FILENAME );
		break;


	}
}