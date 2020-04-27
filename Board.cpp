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
	std::cout << "Resources freed" << std::endl;
}

void Board::initBoard(Player& player1, Player& player2, int campfires) {
	for(int i = 0; i < BOARD_WIDTH * BOARD_HEIGHT; ++i) {
		board[i] = new Tile(1);
	}

	int p1 = player1.getPos();
	int p2 = player2.getPos();

	board[p1]->setFill(player1.getToken());
	board[p1]->setEmptyFalse();

	board[p2]->setFill(player2.getToken());
	board[p2]->setEmptyFalse();


}

// Below function needs a companion function that will setEmptyTrue() on squares, when players move out of those squares
void Board::updateBoard(Player& player1, Player& player2) {		// This function can overrun array bounds, so need to fix it at some point

	int p1 = player1.getPos();
	int p2 = player2.getPos();

	board[p1]->setFill(player1.getToken());
	board[p1]->setEmptyFalse();

	board[p2]->setFill(player2.getToken());
	board[p2]->setEmptyFalse();

}

void Board::printTileColor(int x, int y) {
	board[x]->printColor();
}

void Board::printBoard() {
	for(int i = 0; i < BOARD_HEIGHT; ++i) {
		for(int j = 0; j< BOARD_WIDTH; ++j) {
			std::cout << board[(i * 15) + j]->getTileLeft();
			std::cout << board[(i * 15) + j]->getFill();
			std::cout << board[(i * 15) + j]->getTileRight();
		}
		std::cout << std::endl;
	}
}
