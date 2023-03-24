#pragma once
#include "ball.h"

const int recharge = 20;
struct Player
{

	
;
public:
	
	std::string m_name;
	int m_score;
	BallEnumClass* m_balls;

	//COnstructor y Destructor

	Player(int score, std::string name);



	//Getters
	std::string GetName();
	int ReturnScore();
	//Setters
	void SetName(const std::string name);

	
	
	void printPlayer();
	void afterShoot();
	
};



