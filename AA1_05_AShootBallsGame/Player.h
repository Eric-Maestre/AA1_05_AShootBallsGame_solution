#pragma once
#include "ball.h"

const int recharge = 20;
class Player
{
private:
	std::string m_name = "Cap";
	int m_score = 0;

	void Initialize();
public:
	BallEnumClass* m_balls;

	//COnstructor y Destructor

	Player(int score, int name);



	//Getters
	std::string GetName();
	int ReturnScore();
	//Setters
	void SetName(const std::string name);

	
	
	void printPlayer(Player p);
	void afterShoot(Player p);
	
};



