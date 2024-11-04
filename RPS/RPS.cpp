#include <iostream>

using namespace std;
int userinput;


int main() {


	cout << "choose your hand sgin: \n";
	cout << "1. Rock \n";
	cout << "2. Paper \n";
	cout << "3. Scissor\n";

	cin >> userinput;


	if (userinput == 1) {

		cout << "It's a draw.\n";

	}
	else if (userinput == 3){

		cout << "Ha ha ha....you lost jackass!\n";
        
	 }
	else {

		cout << "you win!...now get lost!";
	}

}


