//============================================================================
// Name        : silvertip.cpp
// Author      : stephen watson
//============================================================================

//TODO:
// 	- Need to generate the game board with elements of the game
//  - Need to create the deck class
//  - Figure out how to make players move
//  - Might need to take the position initialization out of the Player constructor, because it would be cleaner to do it in initBoard()

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


	Player player1("x",p1StartPos / 15, p1StartPos % 15), player2("o",p2StartPos / 15, p2StartPos % 15);
	Board gameBoard;
	gameBoard.initBoard(player1, player2, numCampfires);	// You only call this once, so pass it the two player objects, and let it set their positions like updateBoard does
							// Don't forget to set the corresponding Tiles to empty = true
							// And initialize the rest of the objects

	player1.printInfo();
	player2.printInfo();

	gameBoard.updateBoard(player1, player2);
	gameBoard.printBoard();
	gameBoard.printTileColor(1,1);

	return 0;
}
