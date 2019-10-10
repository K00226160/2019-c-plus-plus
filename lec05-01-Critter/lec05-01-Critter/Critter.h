#ifndef CRITTER_H
#define CRITTER_H

#include <iostream>

using namespace std;

class Critter
{
public:
	static int s_Total;     //static member variable declaration
							//total number of Critter objects in existence

	Critter(int hunger = 0);
	static int GetTotal();  //static member function prototype

private:
	int m_Hunger;
};

#endif