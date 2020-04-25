/*
 * Board.cpp
 *
 *  Created on: Apr 24, 2020
 *      Author: stephen
 */

#include "Board.h"

Board::Board() {
	board = new Tile*[BOARD_WIDTH * BOARD_HEIGHT];
}

Board::~Board() {
	for(int i = 0; i < BOARD_WIDTH; ++i) {
			if(board[i] != nullptr) {
				delete board[i];
			}
	}
	//delete board;
	std::cout << "Resources freed" << std::endl;
}

void Board::initBoard() {
	for(int i = 0; i < BOARD_WIDTH * BOARD_HEIGHT; ++i) {
		board[i] = new Tile;
	}
}

void Board::printTileColor(int x, int y) {
	board[x]->printColor();
}
