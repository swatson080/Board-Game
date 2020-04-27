/*
 * Tile.h
 *
 *  Created on: Apr 24, 2020
 *      Author: stephen
 */

#ifndef TILE_H_
#define TILE_H_

#include <iostream>

class Tile {
public:
	// Change to enum class?
	enum terrainColor { yellow, blue, green, brown };

	Tile();
	Tile(int c);
	virtual ~Tile();

	void printColor();

	std::string getTileLeft();
	std::string getTileRight();
	std::string getFill();

	void setFill(std::string f);

	bool isEmpty();
	void setEmptyFalse();
	void setEmptyTrue();

private:
	const std::string tileLeft = "[";
	const std::string tileRight = "]";

	terrainColor color;
	bool empty;		// To test if the tile is empty
	std::string fill;

	// Will eventually add private members for other objects (Players, flora, fauna)
};

#endif /* TILE_H_ */
