#include "Ball.h"
#include "Function.h"


int main()
{
	
	srand(time(NULL));
	//bolas destruir
	//Ball*enemyBalls = new Ball[originalBalls];
	
	BallStruct panel;

	bool gameOver = false;

	std::cout << "Please introduce the number of balls you want to create in the pannel:\n\n";

	panel.inIt();

	panel.printBalls();

	while (!gameOver)
	{

		std::cout << "\n\nPlease introduce your position:\n\n";

		std::cin >> panel.position;

		if (panel.position > panel.size)
		{
			std::cout << "\n\nPlease introduce a valid position:\n\n";

			std::cin >> panel.position;
		}

		panel.insert(panel.position, BallEnumClass::GREEN); //Cambiar cuando Erich aga su parte pq no keremos k sea siempre Greem la vola k sale del trabuco del jogador

		panel.printBalls();

	}



}
