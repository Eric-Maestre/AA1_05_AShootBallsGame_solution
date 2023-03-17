#pragma once
#include "ball.h"


struct Player
{
	std::string name;
	BallEnumClass*m_balls;
	int score;

	void inIt();
	void shoot();
};
void printPlayer(Player p);

