/*
 * Player.cpp
 *
 *  Created on: Apr 16, 2020
 *      Author: stephen
 */

#include "Player.h"

short Player::playerCount = 0;

Player::Player(std::string token, int p) : playerToken(token), pos(p) {
	++playerCount;
	playerID = playerCount;
	restPoints = 3;
	stamina = 10;
	reputation = 0;
	health = 20;
	gold = 0 ;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

long long Player::getRestPoints() {
	return restPoints;
}
long long Player::getStamina() {
	return stamina;
}
long long Player::getReputation() {
	return reputation;
}
long long Player::getHealth() {
	return health;
}
long long Player::getGold() {
	return gold;
}

/*int Player::getPosX() {
	return posX;
}

int Player::getPosY() {
	return posY;
}*/

int Player::getPos() {
	return pos;
}

std::string Player::getToken() {
	return playerToken;
}

void Player::printInfo() {
	std::cout << "~~Player " << playerID << "~~" << std::endl;
	std::cout << "Health: " << health << std::endl;
	std::cout << "Gold: " << gold << std::endl;
	std::cout << "Rest Points: " << restPoints << std::endl;
	std::cout << "Stamina: " << stamina << std::endl;
	std::cout << "Reputation: " << reputation << "\n" << std::endl;

}
