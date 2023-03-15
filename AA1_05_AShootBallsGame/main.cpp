#include "Ball.h"



int main()
{
	int originalBalls = 5;
	srand(time(NULL));
	//bolas destruir
	Ball* enemyBalls = new Ball[originalBalls];
	for (int i = 0; i < originalBalls; i++)
	{
		int color = randomNum(0, 4);
		switch (color)
		{
		case 0:
			enemyBalls[i].m_color = GREEN;
			break;
		case 1:
			enemyBalls[i].m_color = BLUE;
			break;
		case 2:
			enemyBalls[i].m_color = RED;
			break;
		case 3:
			enemyBalls[i].m_color = CYAN;
			break;
		case 4:
			enemyBalls[i].m_color = YELLOW;
			break;


		}


	}
	



}
