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
//  - Figure out how to make players move
//  - Might need to take the position initialization out of the Player constructor, because it would be cleaner to do it in initBoard()

// <iostream> is in Player.h
// "Player.h" is in "Board.h"
#include "Board.h"

int main() {

	Player player1("x",0,1), player2("o",14,0);
	Board gameBoard;
	gameBoard.initBoard();

	player1.printInfo();
	player2.printInfo();

	gameBoard.updateBoard(player1, player2);
	gameBoard.printBoard();
	gameBoard.printTileColor(1,1);

	return 0;
}
