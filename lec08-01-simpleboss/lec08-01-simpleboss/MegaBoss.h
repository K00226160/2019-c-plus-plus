#ifndef MEGABOSS_H
#define MEGABOSS_H
#include "Boss.h"

#include <iostream>
using namespace std;

class MegaBoss : public Boss
{
public:
	int m_MegaDamageMultiplier;

	MegaBoss();
	void MegaAttak() const;
	~MegaBoss();

};
#endif // !MEGABOSS_H

