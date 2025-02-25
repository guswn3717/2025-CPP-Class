#include <iostream>

using namespace std;

class Vector2
{
private:
	int x;
	int y;
public:
	Vector2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	
	const int& X() { return x; }
	const int& Y() { return y; }

	Vector2& operator + (const Vector2& clone)
	{
		Vector2 vector(x + clone.x, y + clone.y);

		return vector;
	}

	Vector2& operator - (const Vector2& clone)
	{
		Vector2 vector(x - clone.x, y - clone.y);

		return vector;
	}

	Vector2& operator * (const Vector2& clone)
	{
		Vector2 vector(x * clone.x, y * clone.y);

		return vector;
	}

	Vector2& operator / (const Vector2& clone)
	{
		Vector2 vector(x / clone.x, y / clone.y);

		return vector;
	}

	Vector2& operator++()
	{
		this->x++;
		this->y++;

		return *this;
	}

	Vector2& operator--()
	{
		this->x--;
		this->y--;

		return *this;
	}

	Vector2& operator++(int)
	{
		Vector2 clone(x, y);

		this->x++;
		this->y++;

		return *this;
	}

	Vector2& operator--(int)
	{
		Vector2 clone(x, y);

		this->x--;
		this->y--;

		return *this;
	}
};


int main()
{
#pragma region 연산자 오버로딩
	
	Vector2 direction1(3, 4);
	Vector2 direction2(1, 2);

	Vector2 direction = direction1 + direction2;
	cout << direction.X() << " " << direction.Y() << endl;

	direction = direction1 - direction2;
	cout << direction.X() << " " << direction.Y() << endl;
	
	direction = direction1 * direction2;
	cout << direction.X() << " " << direction.Y() << endl;
	
	direction = direction1 / direction2;
	cout << direction.X() << " " << direction.Y() << endl;

	++direction;
	cout << direction.X() << " " << direction.Y() << endl;

	--direction;
	cout << direction.X() << " " << direction.Y() << endl;

	cout << direction++.X() << endl;

	cout << direction.X() << " " << direction.Y() << endl;

#pragma endregion

	return 0;
}