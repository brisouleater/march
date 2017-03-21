#include<iostream>
#include <string>
#include<ctime>
#include<cstdlib>
using namespace std;
void yugioh(); // declarations
int room = 1;
int health = 100;
int input;
int main() {
	string input1;
	char input = 'a';
	while (input != 'q') {
		switch (room) {
		
		case 1:
			cout << "you are in room 1, the living room" << endl;
			cout << "everything in here is so dusty and old,nothing much too see here though" << endl;
			cout << "you can go north...or south.Haha" << endl;
			getline(cin,input1);
			if (input1.compare("go north"))
				room = 2;
			if (input1.compare("go south"))
				room = 11;

			break;

		case 2:
			cout << "you're in room 2,the bathroom" << endl;
			cout << "their is much blood here go wast to see the bath tub" << endl;
			getline(cin, input1);
			if (input1.compare("go west"))
				cout << "you found a dead body! pick up the thing in the dead bodies hand" << endl;
			getline(cin, input1);
			if (input1.compare("pick up"))
				cout << "you now have a smelly gut! eat it to get a chicken wing" << endl;
			if (input1.compare("eat it"))
				cout << "congrats here grab your chicken wing" << endl;
			if (input1.compare("grab"))
				cout << "here you go you will need it later on"<<endl;
			cout << "you cant go anywhere except for east" << endl;
			getline(cin, input1);
			if (input1.compare("go east"))
				room = 3;
			break;

		case 3:
			cout << "you're in room 3, the other room" << endl;
			cout << "this room is too dark too see,get out of here!" << endl;
			cout << " go east" << endl;
			getline(cin, input1);
			if (input1.compare("go east"))
				room = 4;
			break;

		case 4:
			cout << "your in room 4, the kitchen" << endl;
			cout << "omg there are hungry monsters"<< endl;
			cout << "throw the chicken wing!" << endl;
			getline(cin, input1);
			if (input1.compare("throw"))
				cout << "the monsters are dead because they ate the chicken wing!" << endl;
			cout << "you can go east." << endl;
			getline(cin, input1);
			if (input1.compare("go east"))
				room = 5;
			break;

		case 5:
			cout << "your in room 5, the kind lamas room" << endl;
			cout<< "their are so many lamas!ahww you should pet them" << endl;
			getline(cin, input1);
			if (input1.compare("pet lamas"))
				cout << "rad, the lamas gave you a sticker,take it! you will need it" << endl;
				getline(cin, input1);
				if (input1.compare("take sticker"))
			cout << "you can go north but you should go east." << endl;
			getline(cin, input1);
			if (input1.compare("north"))
				room = 6;
			if (input1.compare("go east"))
				room = 7;
			break;

		case 6: cout << "you cant enter this room until u give me the sticker" << endl;
			getline(cin, input1);
			if (input1.compare("give sticker"))
			cout << "you are in the dbz room!" << endl;
			cout << "raad!! you can see goku but he looks busy" << endl;
			cout << "you can go north,east or south" << endl;
			getline(cin, input1);
			if (input1.compare("go north"))
				room = 10;
			if (input1.compare("go east"))
				room = 8;
			if (input1.compare("go south"))
				room = 5;
			break;

		case 7: cout << "your in room 7,the angry lamas room" << endl;
			cout << "The lamas are angry at you!! they trampled you till blood gushed out of you ,you have died but it was rad" << endl;
			input= 'q';
			break;

		case 8: cout << "your in room 8,the colering room" << endl;
			cout << "you can go south or east" << endl;
			getline(cin, input1);
			if (input1.compare("go south"))
				room = 7;
			if (input1.compare("go west"))
				room = 6;
			if (input1.compare("go north"))
				room = 9;
			break;

		case 9: cout << "your in room 9, the bedroom" << endl;
			cout << "you can go south" << endl;
			getline(cin, input1);
			if (input1.compare("go south"))
				room = 8;
			if (input1.compare("go west"))
				room = 6;
			break;

		
		case 10:cout << "your in room 10,the hugs room" << endl;
			cout << "this is the last room congrats you won!!how many hugs do you want ?" << endl;
			cin >> input;
			for (int i = 0; i <= (input - 1); i++) {
				cout << "HUUG" << endl;
				input = 'q';
			}
			break;

		case 11: 
			cout << "you are in room 11, the secret room!" << endl;
			cout << "this room is so empty.. oh wait go south" << endl;
			getline(cin, input1);
			if (input1.compare("go south"))
				cout << "their is a magical sword!! pick it up" << endl;
			getline(cin, input1);
			if (input1.compare("pick up")) {
				cout << "omgrr you won!!" << endl;
				input = 'q';
			}
			break;
			
			
			}
		}//end switch
	}//end while
}//end main



void yugioh() {
	int num = rand() % 100 + 1;
	if (num <= 20)
		cout << "Armored Zombie apears" << endl;
	if (num > 20 && num <= 60)
		cout << "Talwar Beast is here to attack " << endl;
	if (num > 60 && num <= 79)
		cout << "Blackland Fire Dragon wants you to die burnning!" << endl;
	if (num > 79 && num <= 89) {
		cout << "murrgrr is here" << endl;
		cout << "he gives you health by poking you" << endl;
		health = health + 65;
	}
	if(num > 89 && num<= 100) {
		cout << "your dead cuz blue eyes white dragon is here " << endl;
		health = health - 100;
	}
}