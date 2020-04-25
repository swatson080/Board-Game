/*
 * Tile.cpp
 *
 *  Created on: Apr 24, 2020
 *      Author: stephen
 */

#include "Tile.h"

Tile::Tile() {
	color = yellow;
	empty = true;

}

Tile::~Tile() {
	// TODO Auto-generated destructor stub
}

void Tile::printColor() {
	if(color == yellow) {
		std::cout << "Yellow Tile" << std::endl;
	}
}
