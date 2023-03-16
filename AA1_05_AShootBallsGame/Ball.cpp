#include "Ball.h"

void printBalls(Ball b[], int numberBall)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 0; i < numberBall; i++)
	{
		switch(b[i].m_color)
		{
		case BallColor::GREEN:
			SetConsoleTextAttribute(h, 2 );
			break;
		case BallColor::BLUE:
			SetConsoleTextAttribute(h,1);
			break;
		case BallColor::RED:
			SetConsoleTextAttribute(h, 4);
			break;
		case BallColor::CYAN:
			SetConsoleTextAttribute(h, 3);
			break;
		case BallColor::YELLOW:
			SetConsoleTextAttribute(h, 14);
			break;
		}
	}
}