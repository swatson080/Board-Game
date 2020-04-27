//============================================================================
// Name        : silvertip.cpp
// Author      : stephen watson
//============================================================================

//TODO:
// 	- Need to generate the game board with elements of the game
//  - Need to create the deck class
//  - Figure out how to make players move
//  - Figure out how to init campfires

// <iostream> is in Player.h
// "Player.h" is in "Board.h"
#include "Board.h"
#include <stdlib.h>
#include <time.h>

int main() {

	// Initialize rand() and generate random values for initBoard
	srand(time(NULL));

	// Player starting positions - not sure if this is the best way to do it though
	int p1StartPos = rand() % 30;
	int p2StartPos = rand() % 30 + 195;

	int numCampfires = (rand() % 5) + 3;	// At least 3 campfires, and at most 7


	Player player1("x", p1StartPos), player2("o", p2StartPos);
	Board gameBoard;
	gameBoard.initBoard(player1, player2, numCampfires);	// Initialize the rest of the objects

	player1.printInfo();
	player2.printInfo();

	//gameBoard.updateBoard(player1, player2);
	gameBoard.printBoard();
	gameBoard.printTileColor(1,1);

	return 0;
}
