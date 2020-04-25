//============================================================================
// Name        : silvertip.cpp
// Author      : stephen watson
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//TODO:
// 	- Need to generate the game board with elements of the game
//  - Need to create the deck class
//  - Need to put player's positions in the Player class

// <iostream> is in Player.h
#include "Player.h"
#include "Board.h"

int main() {

	Player player1, player2;
	Board gameBoard;
	gameBoard.initBoard();

	player1.printInfo();
	player2.printInfo();

	gameBoard.printTileColor(1,1);
	return 0;
}
