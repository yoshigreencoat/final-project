#include <iostream>
using namespace std;

int playerHealth = 500;
int main() {
	srand(time(NULL));
	int room = 1;
	string input;
	while (playerHealth > 0)
		switch (room) {
			cout << "Welcome to Memory of the world!" << endl;

		case 1:
			cout << "your in room 1, you can go east" << endl;
			cin >> input;
			if (input == "east")
				room = 2;
			break;
		case 2:
			cout << "your in room 2, you can go east or north" << endl;
			cin >> input;
			if (input == "east")
				room = 3;
			else if (input == "north")
				room = 4;
			break;
		case 3:
			cout << "your in room 4, you can go north" << endl;
			cin >> input;
			if (input == "north")
				room = 5;
			break;


		}   
        


}
