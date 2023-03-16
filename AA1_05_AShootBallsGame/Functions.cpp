#include <iostream>

int randomNum(int min, int max)
{
	return rand() % (max - min) - min + 1;
}