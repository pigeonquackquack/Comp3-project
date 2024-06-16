#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>

using namespace std;

int randomGame() {
	srand((unsigned) time(NULL));
	int random = 1 + (rand() % 3);
	return random;
}

int main() {
	// display game options
	cout << "\t CHOOSE YOUR GAME" << endl << endl;

	cout << "[1] TicTacToe" << endl;
	cout << "[2] Hangman" << endl;
	cout << "[3] Bet and Guess" << endl;
	cout << "[4] Random Select" << endl;
	cout << "[5] Exit" << endl;

	cout << endl;

	// get user input of options
	int option;
	cout << "Select your option: ";
	cin >> option;
	cout << endl;
	// switch case for options
	switch (option) {
		case 1:
			cout << "Game chosen: TicTacToe" << endl;
			//function for TicTacToe
			break;
		case 2:
			cout << "Game chosen: Hangman" << endl;
			//function for Hangman
			break;
		case 3: 
			cout << "Game chosen: Bet and Guess" << endl;
			//function for Hangman
			break;
		case 4: 
			cout << "You will now play a random game." << endl;
			switch (randomGame()) {
				case 1:
					cout << "Game chosen: TicTacToe" << endl;
					//function for TicTacToe
					break;
				case 2:
					cout << "Game chosen: Hangman" << endl;
					//function for Hangman
					break;
				case 3:
					cout << "Game chosen: Bet and Guess" << endl;
					//function for Hangman
					break;
			}
			break;
		case 5: 
			cout << "Game exited. See you again next time!" << endl;
			break;
	}
}
