#ifndef CRITTER_H
#define CRITTER_H

#include <iostream>

using namespace std;

class Critter
{
public:
	Critter(int hunger = 0, int boredom = 0);
	void Talk();
	void Eat(int food = 4);
	void Play(int fun = 4);
	void Extract(int hunger = 34,int boredom = 80) ;

private:
	int m_Hunger;
	int m_Boredom;

	int GetMood() const;
	void PassTime(int time = 1);
	

};
#endif 
