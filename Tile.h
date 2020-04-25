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
	virtual ~Tile();

	void printColor();

private:
	terrainColor color;
	bool empty;		// To test if the tile is empty

	// Will eventually add private members for other objects (Players, flora, fauna)
};

#endif /* TILE_H_ */
