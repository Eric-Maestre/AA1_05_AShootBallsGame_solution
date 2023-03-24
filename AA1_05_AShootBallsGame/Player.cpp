#include "Player.h"



Player::Player(int score, std::string name)
{
	m_name = name;
	m_score = score;	
	m_balls = new BallEnumClass[recharge + 1];

	for (int i = 0; i < recharge; i++)
	{
		m_balls[i] = guardaBolas();
	}
	m_balls[recharge + 1] == BallEnumClass::OMEGA;

}
std::string Player::GetName()
{
	return m_name;
}
int Player::ReturnScore()
{
	return m_score;
}
void Player::SetName(const std::string name)
{
	m_name = name;
}
{
	return m_score;
}
void Player::SetName(const std::string name)
{
	m_name = name;
}

void Player::printPlayer() 
{
	std::cout<< p.name << ":" ;
	
		std::cout << " ";
		for (int i = 0; i < 3; i++)
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

			switch (m_balls[i])
			{
			case BallEnumClass::GREEN:
				SetConsoleTextAttribute(h, 2);
				std::cout << '0';
				break;
			case BallEnumClass::BLUE:
				SetConsoleTextAttribute(h, 1);
				std::cout << '0';
				break;
			case BallEnumClass::RED:
				SetConsoleTextAttribute(h, 4);
				std::cout << '0';
				break;
			case BallEnumClass::CYAN:
				SetConsoleTextAttribute(h, 3);
				std::cout << '0';
				break;
			case BallEnumClass::YELLOW:
				SetConsoleTextAttribute(h, 14);
				std::cout << '0';
				break;
			default:
				std::cout << ' ';
				break;
			}
			SetConsoleTextAttribute(h, 15);
	}
	std::cout << "   Score:" << p.score << std::endl;

}

void Player::afterShoot()
{

	BallEnumClass* panelArray2 = new BallEnumClass[recharge];
	for (int i = 0; i < recharge-1; i++)
	{
		panelArray2[i] = m_balls[i+1];
	}

	delete[] m_balls;

	m_balls = new BallEnumClass[recharge];
	for (int i = 0; i < recharge - 1; i++)
	{
		m_balls[i] = panelArray2[i];
	}

	delete[] panelArray2;
	panelArray2 = nullptr;
}
