#include<iostream>

using namespace std;

class Weapon
{
protected:
	int attack;
	int initersection;

public:
#pragma region �������̵�
	/*���� Ŭ������ �ִ� �Լ��� ���� Ŭ�������� �������Ͽ� ����ϴ� ����Դϴ�*/

	void Attack()
	{
		cout << "Weapon Attack" << endl;
	}

	/*�������̵�� ��� ���迡���� �̷������, ���� Ŭ�������� �Լ��� �������� �� ���� Ŭ������ �Լ� ���¿� ��ġ�ؾ� �մϴ�*/
#pragma endregion

};

class Knife : public Weapon
{
public:
	void Attack()
	{
		cout << "Knife Attack" << endl;
	}
};

class Knuckles : public Weapon
{
public:
	void Attack()
	{
		cout << "Knuckles Attack" << endl;
	}
};

void Coordinate(int x, int y)
{
	cout << "int x�� �� : " << x << endl;
	cout << "int y�� �� : " << y << endl;
}

void Coordinate(int x, int y, int z)
{
	cout << "int x�� �� : " << x << endl;
	cout << "int y�� �� : " << y << endl;
	cout << "int z�� �� : " << z << endl;
}

void Coordinate(float x, float y)
{
	cout << "float x�� �� : " << x << endl;
	cout << "float y�� �� : " << y << endl;
}

void Coordinate(float x, float y, float z)
{
	cout << "float x�� �� : " << x << endl;
	cout << "float y�� �� : " << y << endl;
	cout << "float z�� �� : " << z << endl;
}

int main()
{
#pragma region ������
	/*�������� ���� �ٸ� ��ü�� ������ ����� ���� �ٸ� ������� ó���� �� �ִ� �۾��Դϴ�*/

	//Weapon weapon;
	//
	//Knife knife;
	//Knuckles knuckles;
	//
	//weapon.Attack();
	//
	//knife.Attack();
	//knuckles.Attack();

	/*�������� ������ ������ �Լ��� �Ӽ��� ��������� ���� ���ε��� ���� �ʰ� ����
	�ð��� �Լ��� �Ӽ��� ������ �� �ִ� ���� ���ε��� �����ϰ� �մϴ�*/

#pragma endregion

#pragma region �Լ��� �����ε�
	/*���� �̸��� �Լ��� �Ű� ������ �ڷ����� �Ű� ������ ���� �����Ͽ� ���� ���� ������ �� �ִ� ����Դϴ�*/

	Coordinate(10, 11);
	puts("");

	Coordinate(12, 13, 14);
	puts("");

	Coordinate(14.1f, 14.2f);
	puts("");

	Coordinate(14.3f, 14.4f, 14.5f);

	/*�Լ��� �����ε��� ��� �Լ��� �Ű� ������ �����ϴ� �μ��� ���¸� ���� ȣ���ϹǷ�
	��ȯ������ �Լ��� �����ε��� ������ �� �����ϴ�*/

#pragma endregion


	

	return 0;
}