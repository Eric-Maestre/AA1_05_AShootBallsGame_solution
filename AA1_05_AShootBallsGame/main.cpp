#include "Ball.h"
#include "Function.h"
#include "Player.h"
#include <stdlib.h>


int main()
{
	
	srand(time(NULL));
	//bolas destruir
	//Ball*enemyBalls = new Ball[originalBalls];

	Player Cap;
	Cap.score = 0;
	
	std::cout << "Whats is your name?" << std::endl;
	std::cin >> Cap.name;

	Cap.inIt();

	
	BallStruct panel;

	bool gameOver = false;

	std::cout << "Please introduce the number of balls you want to create in the pannel:\n\n";

	panel.inIt();

	system("cls");

	panel.printBalls();
	printPlayer(Cap);

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


		panel.insert(panel.position, Cap.m_balls[0]); 
		afterShoot(Cap);

		panel.verifier(panel.position);

		printPlayer(Cap);
		panel.printBalls();

	}



}
