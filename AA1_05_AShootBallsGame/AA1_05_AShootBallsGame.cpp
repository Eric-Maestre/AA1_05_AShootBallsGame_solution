#include "Ball.h"
#include "Functions.h"

int main()
{
	srand(time(NULL));

	int x = randomNum(0,5);
	std::cout << x << std::endl;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	

	switch (x)
	{
	case 0:
		SetConsoleTextAttribute(h,10);
		std::cout << "Fuck You" << std::endl;

		break;
	case 1:
		SetConsoleTextAttribute(h, 1);
		std::cout << "Fuck You" << std::endl;

		break;
	case 2:
		SetConsoleTextAttribute(h, 2);
		std::cout << "Fuck You" << std::endl;

		break;
	case 3:
		SetConsoleTextAttribute(h, 4);
		std::cout << "Fuck You" << std::endl;

		break;
	case 4:
		SetConsoleTextAttribute(h, 6);
		std::cout << "Fuck You" << std::endl;

		break;
	case 5:
		SetConsoleTextAttribute(h, 5);
		std::cout << "Fuck You" << std::endl;

		break;

	}



}
