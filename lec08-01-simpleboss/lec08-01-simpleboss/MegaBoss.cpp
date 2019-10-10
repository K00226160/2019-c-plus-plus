#include "MegaBoss.h"
#include "Enemy.h"

MegaBoss::Boss() :
	m_MegaDamageMultiplier(10)
{}

void MegaBoss::MegaAttack() const
{
	cout << "Special Attack inflicts " << (m_MegaDamageMultiplier * m_Damage);
	cout << " damage points!\n";
}

MegaBoss::~MegaBoss()
{
	cout << "MegaBoss Deconstructor called" << endl;
}