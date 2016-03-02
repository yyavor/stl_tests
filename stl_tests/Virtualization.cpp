#include "stdafx.h"
#include "Virtualization.h"
#include "genericHeader.h"

void Ninja::attack()
{
	cout << "Ninja::attack()" << endl;
}

void Monster::attack()
{
	cout << "Monster::attack()" << endl;
}

void testVirtualization()
{
	cout << "\n//testOverloading" << endl;
	Ninja ninjaObj;
	Monster monsterObj;
	Enemy *enemy;
	enemy = &ninjaObj;
	enemy->attack();
	enemy = &monsterObj;
	enemy->attack();
	ninjaObj.attack();
	monsterObj.attack();
	Cat cat = Cat(8);
	Tiger tiger = Tiger(4);
}