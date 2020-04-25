/*
 * Player.h
 *
 *  Created on: Apr 16, 2020
 *      Author: stephen
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>

class Player {
public:
	Player();
	virtual ~Player();

	static short playerCount;

	long long getRestPoints();
	long long getStamina();
	long long getReputation();
	long long getHealth();
	long long getGold();
	void printInfo();

private:
	short playerID;
	long long int restPoints;
	long long int stamina;
	long long int reputation;
	long long int health;
	long long int gold;

	// Will eventually have a pointer to *Card objects

};

#endif /* PLAYER_H_ */
