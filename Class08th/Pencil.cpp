#include <iostream>
#include "paint.h"
#include "Pencil.h"

using namespace std;

Pencil::Pencil()
{
	thickness = 0.25f;
}

void Pencil::Draw()
{
	cout << "���� : " << thickness << endl;
	cout << "Pencil Draw" << endl;
}

Pencil::~Pencil()
{
	cout << "Release Pencil" << endl;
}
