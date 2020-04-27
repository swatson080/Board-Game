/*
 * Board.h
 *
 *  Created on: Apr 24, 2020
 *      Author: stephen
 */

#ifndef BOARD_H_
#define BOARD_H_

#include "Tile.h"
#include "Player.h"
//#include <iostream>

class Board {
public:
	const short BOARD_WIDTH = 15;
	const short BOARD_HEIGHT = 15;

	Board();
	virtual ~Board();

	void initBoard(Player& player1, Player& player2, int campfires);
	void updateBoard(Player& player1, Player& player2);    // Will need to add more to this function to update other game objects

	void printTileColor(int x, int y);		// TEST FUNCTION
	void printBoard();

private:
	Tile** board;
};

#endif /* BOARD_H_ */
