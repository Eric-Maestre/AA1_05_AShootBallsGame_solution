#include "Ball.h"
#include "Functions.h"


int main()
{
	
	int originalBalls = 5;
	srand(time(NULL));
	//bolas destruir
	Ball*enemyBalls = new Ball[originalBalls];
	for (int i = 0; i < originalBalls; i++)
	{
		int color = randomNum(0, 4);
		switch (color)
		{
		case 0:
			enemyBalls[i].m_color = BallColor::GREEN;
			break;
		case 1:
			enemyBalls[i].m_color = BallColor::BLUE;
			break;
		case 2:
			enemyBalls[i].m_color = BallColor::RED;
			break;
		case 3:
			enemyBalls[i].m_color = BallColor::CYAN;
			break;
		case 4:
			enemyBalls[i].m_color = BallColor::YELLOW;
			break;


		}


	}
	



}
