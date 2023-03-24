#pragma once
#include <iostream>
#include <windows.h>
#include <vector>


enum class BallEnumClass { GREEN, BLUE, RED, CYAN, YELLOW, OMEGA };


class PanelStruct
{


public:


	BallEnumClass*panel;
	int size;
	int position;

	void printBalls();
	void inIt();
	void insert(int position, BallEnumClass ball);
	//int verifier(int position, Ball ball);
	//void deleteThree(int position);
	//void deleteThree(int position);

	
	int verifier(int position, int size, int score);
	
	//color


	//if color1 == color2 & color2 == color 3 
	//color3 = new collor

	//posicion 
	
};

BallEnumClass guardaBolas();



 
