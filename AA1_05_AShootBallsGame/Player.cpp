#include "Player.h"


void Player::inIt() 
{

	int recharge = 20;

	m_balls = new BallEnumClass[recharge];

	for (int i = 0; i < recharge; i++)
	{
		m_balls[i] = guardaBolas();
		
	}

	//Por acabar -> CUMprovar k no haya tres bowlings iguales XD

}

void printPlayer(Player p) 
{
	std::cout<< p.name << ":" ;
	for (int i = 0; i < 3; i++)
	{
		std::cout << " " << p.m_balls;
	}
	std::cout << "   Score:" << p.score << std::endl;

}
