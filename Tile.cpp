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
	fill = " ";

}

Tile::Tile(int c) {
	if(c == 1) {
		color = blue;
	}
	empty = true;
	fill = " ";
}

Tile::~Tile() {
	// TODO Auto-generated destructor stub
}

void Tile::printColor() {
	switch(color) {
	case yellow:
		std::cout << "Yellow Tile" << std::endl;
		break;
	case blue:
		std::cout << "Blue Tile" << std::endl;
		break;
	case green:
		std::cout << "Green Tile" << std::endl;
		break;
	case brown:
		std::cout << "Brown Tile" << std::endl;
		break;
	}
}

std::string Tile::getTileLeft() {
	return tileLeft;
}

std::string Tile::getTileRight() {
	return tileRight;
}

std::string Tile::getFill() {
	return fill;
}

void Tile::setFill(std::string f) {
	fill = f;
}

bool Tile::isEmpty() {
	return empty;
}

void Tile::setEmptyFalse() {
	empty = true;
}

void Tile::setEmptyTrue() {
	empty = false;
}
