#include "Critter.h"

int Critter::s_Total = 0;   //static member variable initialization

Critter::Critter(int hunger) :
	m_Hunger(hunger)
{
	cout << "A critter has been born!" << endl;
	++s_Total;
}

int Critter::GetTotal()     //static member function definition
{
	return s_Total;
}
