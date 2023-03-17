#include "Ball.h"
#include "Function.h"
#include "Player.h"


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

	while (!gameOver)
	{
		printPlayer(Cap);

		std::cout << "\n\nPlease introduce objective:\n\n";

		std::cin >> panel.position;

		if (panel.position > panel.size || panel.position < 0)
		{
			system("cls");
			while (panel.position > panel.size || panel.position < 0)
			{
				std::cout << "\n\nPlease introduce a valid objective:\n\n";

				std::cin >> panel.position;
				system("cls");
			}
		}

		panel.insert(panel.position, BallEnumClass::GREEN); //Cambiar cuando Erich aga su parte pq no keremos k sea siempre Greem la vola k sale del trabuco del jogador

		printPlayer(Cap);
		panel.printBalls();

	}



}
