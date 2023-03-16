#include "Ball.h"
#include "Function.h"
#include <iostream>

/*void printBalls(Ball b[], int numberBall)
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
}*/

void BallStruct::inIt() {

	std::cin >> size;

	panel = new BallEnumClass[size];

	for (int i = 0; i < size; i++)
	{
		panel[i] = guardaBolas();
		if ( ( panel[i - 2] == panel[i] && panel[i - 1] == panel[i]) || (panel[i + 2] == panel[i] && panel[i + 1] == panel[i]) )
		{
			i--;
		}
	}

	//Por acabar -> CUMprovar k no haya tres bowlings iguales XD

}

void BallStruct::printBalls() {

	std::cout << "\n\n";

	for (int i = 0; i < size; i++)
	{
		switch (panel[i])
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
		}
	}

}

BallEnumClass guardaBolas()
{
	
		int color = randomNum(0, 4);
		switch (color)
		{
		case 0:
			return BallEnumClass::GREEN;
			break;
		case 1:
			return BallEnumClass::BLUE;
			break;
		case 2:
			return BallEnumClass::RED;
			break;
		case 3:
			return BallEnumClass::CYAN;
			break;
		case 4:
			return BallEnumClass::YELLOW;
			break;
		}

}

void BallStruct::insert(int position, BallEnumClass ball)
{

	BallEnumClass* panelArray2 = new BallEnumClass[size];

	for (int i = 0; i < size; i++)
	{
		panelArray2[i] = panel[i];
	}

	delete[] panel;

	size++;

	panel = new BallEnumClass[size];

	for (int i = 0; i < size; i++)
	{
		panel[i] = panelArray2[i];
		if (position == i)
			i++;
	}

	delete[] panelArray2;
	panelArray2 = nullptr;


}