#include "Enemy.h"
#include "Boss.h"

int main()
{
	cout << "Creating an enemy.\n";
	Enemy enemy1;
	enemy1.Attack();

	cout << "\nCreating a boss.\n";
	Boss boss1;
	boss1.Attack();
	boss1.SpecialAttack();
	
	cout<< "\nCreating a Megaboss"<<endl;
	Boss megaboss1;

	return 0;
}
