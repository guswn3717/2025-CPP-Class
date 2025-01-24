#include <iostream>
#include "paint.h"
#include "Brush.h"

using namespace std;

Brush::Brush()
{
	thickness = 1.0f;
}

void Brush :: Draw()
{
	cout << "±½±â : " << thickness << endl;
	cout << "Brush Draw" << endl;
}

Brush::~Brush()
{
	cout << "Release Brush" << endl;
}