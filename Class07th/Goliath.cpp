#include "Goliath.h"
#include <iostream>

using namespace std;

Goliath::Goliath()
{
	attack = 12;
	health = 125;
	defense = 1;
}

void Goliath::Stats()
{
	cout << "Attack(����) : " << attack << endl;
	cout << "Attack(����) : " << attack + 8 << endl;

	cout << "Health : " << health << endl;
	cout << "Defense : " << defense << endl << endl;
}
