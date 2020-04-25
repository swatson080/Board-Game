/*
 * Board.h
 *
 *  Created on: Apr 24, 2020
 *      Author: stephen
 */

#ifndef BOARD_H_
#define BOARD_H_

#include "Tile.h"
//#include <iostream>

class Board {
public:
	const short BOARD_WIDTH = 15;
	const short BOARD_HEIGHT = 15;

	Board();
	virtual ~Board();

	void initBoard();
	void printTileColor(int x, int y);

private:
	Tile** board;
};

#endif /* BOARD_H_ */
