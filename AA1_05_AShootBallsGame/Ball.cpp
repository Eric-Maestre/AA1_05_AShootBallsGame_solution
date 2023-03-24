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

void PanelStruct::inIt() {

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

void PanelStruct::printBalls() {

	std::cout << "\n\n";

	for (int i = 0; i < size; i++)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		switch (panel[i])
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
	std::cout << "\n\n";


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
		default:
			return BallEnumClass::OMEGA;
			break;

		}

}

void PanelStruct::insert(int position, BallEnumClass ball)
{
	size++;
	BallEnumClass* panelArray2 = new BallEnumClass[size];

	for (int i = 0; i < position; i++)
	{
		panelArray2[i] = panel[i];
	}
	for (int i = position + 1; i < size; i++)
	{
		panelArray2[i] = panel[i - 1];
	}
	

	
	delete[] panel;

	panel = new BallEnumClass[size];

	for (int i = 0; i < size; i++)
	{
		panel[i] = panelArray2[i];
		
	}
	panel[position] = ball;
	

	delete[] panelArray2;
	panelArray2 = nullptr;


}
int PanelStruct::verifier(int position, int size, int score)
{

	if (panel[position] == panel[position - 1] && panel[position] == panel[position - 2])
	{
		for (int i = position - 2; i < size - 3; i++)
		{
			panel[i] = panel[i + 3];
		}
		for (int i = size - 3; i < size; i++)
		{
			panel[i] = guardaBolas();
		}
		score += 1;
	}
	if (panel[position] == panel[position + 1] && panel[position] == panel[position + 2])
	{
		for (int i = position; i < size - 3; i++)
		{
			panel[i] = panel[i + 3];
		}
		for (int i = size - 3; i < size; i++)
		{
			panel[i] = guardaBolas();
		}
		score += 1;
	}
	if (panel[position] == panel[position - 1] && panel[position] == panel[position + 1])
	{

		for (int i = position - 1; i < size - 3; i++)
		{
			panel[i] = panel[i + 2];
		}
		for (int i = size - 3; i < size; i++)
		{
			panel[i] = guardaBolas();
		}
		score +=1;
	}
	
	return score;
	
}