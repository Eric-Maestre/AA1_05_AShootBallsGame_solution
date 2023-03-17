#pragma once
#include "ball.h"

const int recharge = 20;
struct Player
{
	std::string name;
	BallEnumClass*m_balls;
	int score;

	void inIt();
	
};
void printPlayer(Player p);
void afterShoot(Player p);


