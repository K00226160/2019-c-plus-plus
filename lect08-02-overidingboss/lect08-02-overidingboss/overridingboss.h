#ifndef OVERRIDINGBOSS_H
#define OVERRIDINGBOSS_H
#include "Enemy.h"

#include <iostream>

using namespace std;

class Boss : public Enemy
{
public:
	Boss(int damage = 30);
	void virtual Taunt() const;      //optional use of keyword virtual
	void virtual Attack() const;     //optional use of keyword virtual
};


#endif