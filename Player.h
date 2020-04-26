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
	Player(std::string token, int x, int y);
	virtual ~Player();

	static short playerCount;
	const short MAX_PLAYERS = 2;

	long long getRestPoints();
	long long getStamina();
	long long getReputation();
	long long getHealth();
	long long getGold();
	int getPosX();
	int getPosY();
	std::string getToken();
	void printInfo();

private:
	short playerID;
	long long int restPoints;
	long long int stamina;
	long long int reputation;
	long long int health;
	long long int gold;
	std::string playerToken;
	int posX;
	int posY;

	// Will eventually have a pointer to *Card objects

};

#endif /* PLAYER_H_ */
