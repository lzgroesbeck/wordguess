/*
 * currentgame.cpp
 *
 *  Created on: Sep 23, 2019
 *      Author: cstclair
 */

#include "currentgame.h"
void CurrentGame::reset(string newWord){
	_gameWord = newWord;
	_attemptsLeft = 6;
	_playerWord = "";
	for (int i=0; i<_gameWord.length(); i++){
		_playerWord = _playerWord + "_";
	}
	_wrongChars.clear();
	//clear is vecotr method that empties contents of vector
}

char CurrentGame::promptUser(){
	char letter;
	// display word to be guessed
	cout << "here is the word to guess" << endl;
	cout << "You have " << endl;
	for (int i=0; i<_playerWord.length(); i++){
		cout << _playerWord[i] << ' ';
	}
	cout << endl;

	// add code to print out guessed letters appropriately


	// prompt user for their guess - this assumes they are entering a valid character
	cout << "guess a letter" << endl;
	cin >> letter;
	return letter;
}

//scope resolution
void printWrongGuesses(){
	// This will print out the letters the user guessed incorrectly and the number of attempts remaining

}

int placeLetter(char letter){
	// Search through _gameWord to see if letter appears
	// If found, _playerWord will be updated with the letter in the same position as found in _gameWord
	// (all positions found will be updated)
	// _attemptsLeft will be decremented





	// Determine return value
	int returnVal = 0;
	// Set returnVal to
	//    1 if _playerWord matches _gameWord,
	//   -1 if it does not match and _attemptsLeft is 0
	//    0 otherwise (play continues)

	return returnVal;
}
int CurrentGame::play(){
	char letter;
	int status = 0;

	do{
		letter = promptUser();
		status = placeLetter(letter);
	}while (status == 0);
	if(status==1){
		cout << "Player wins" << endl;
	}
	else{
		cout << "Player loses" << endl;
	}
	// status is checked and an appropriate message displayed
	return status;
}

