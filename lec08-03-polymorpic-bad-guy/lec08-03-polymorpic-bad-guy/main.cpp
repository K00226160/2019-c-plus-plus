#include "Boss.h"
#include "Enemy.h"

int main()
{
	cout << "Calling Attack() on Boss object through pointer to Enemy:\n";
	Enemy* pBadGuy = new Boss();
	pBadGuy->Attack();
	cout << "\nCalling Attack() on Good guy, Master:\n";
	Enemy* pMinion = new Enemy();
	pMinion->Attack();


	cout << "\n\nDeleting pointer to Enemy:\n";
	delete pBadGuy;
	delete pMinion;
	pBadGuy = 0;
	pMinion = 0;

	return 0;
}
