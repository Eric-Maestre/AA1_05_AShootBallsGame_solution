#include "Ball.h"
#include "Function.h"
#include "Player.h"
#include <stdlib.h>
#include <iostream>


int main()
{
	
	
	srand(time(NULL));
	//bolas destruir
	//Ball*enemyBalls = new Ball[originalBalls];
	std::string newName;
	std::cout << "Whats is your name?(without spaces)" << std::endl;
	std::cin >> newName;

	Player myCap(0, newName);
		

	
	PanelStruct panel;

	bool gameOver = false;

	std::cout << "Please introduce the number of balls you want to create in the pannel:\n\n";

	panel.inIt();

	system("cls");

	panel.printBalls();
	myCap.printPlayer();

	while (!gameOver)
	{
		

		std::cout << "\n\nPlease introduce objective:\n\n";

		std::cin >> panel.position;

		if (panel.position > panel.size || panel.position < 0)
		{
			while (panel.position > panel.size || panel.position < 0)
			{
				std::cout << "\n\nPlease introduce a valid objective:\n\n";

				std::cin >> panel.position;
				
			}
			
		}


		system("cls");

		panel.insert(panel.position, myCap.m_balls[0]); 
		myCap.afterShoot();
		
		int moreScore = 0;

		moreScore += panel.verifier(panel.position, panel.size, moreScore);
		myCap.m_score += moreScore;
		
		myCap.printPlayer();
		panel.printBalls();

		if (myCap.m_balls[0] == BallEnumClass::OMEGA)
		{
			gameOver = true;
		}

	}

	std::cout << "Game Over" << std::endl;
	std::cout << "Your Score:" << myCap.m_score << std::endl;



}
