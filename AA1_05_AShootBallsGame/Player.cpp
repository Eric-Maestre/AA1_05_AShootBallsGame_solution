#include "Player.h"


void Player::inIt() 
{

	

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
	
		std::cout << " ";
		for (int i = 0; i < 3; i++)
		{
			switch (p.m_balls[i])
			{
			case BallEnumClass::GREEN:
				std::cout << 'G';
				break;
			case BallEnumClass::BLUE:
				std::cout << 'B';
				break;
			case BallEnumClass::RED:
				std::cout << 'R';
				break;
			case BallEnumClass::CYAN:
				std::cout << 'C';
				break;
			case BallEnumClass::YELLOW:
				std::cout << 'Y';
				break;
			default:
				std::cout << ' ';
				break;
			}
		
	}
	std::cout << "   Score:" << p.score << std::endl;

}

void afterShoot(Player p)
{

	BallEnumClass* panelArray2 = new BallEnumClass[recharge];
	for (int i = 0; i < recharge-1; i++)
	{
		panelArray2[i] = p.m_balls[i+1];
	}

	delete[] p.m_balls;

	p.m_balls = new BallEnumClass[recharge];
	for (int i = 0; i < recharge - 1; i++)
	{
		p.m_balls[i] = panelArray2[i];
	}

	delete[] panelArray2;
	panelArray2 = nullptr;
}
