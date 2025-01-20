#include <iostream>

using namespace std;

class Terran
{
protected:
	int health;
	int defense;


public:
	Terran()
	{
		cout << "\nCreated Terran" << endl;
	}
};

class Marine : public Terran
{
private:
	int attack;
public:
	Marine()
	{
		attack = 6;
		health = 40;
		defense = 0;

		cout << "Create Marine" << endl;
	}

	void Stats()
	{
		cout << "Marine Health : " << health << endl;
		cout << "Marine Defense : " << defense << endl;
		cout << "Marine Attack : " << attack << endl;
	}
};

class Firebat : public Terran
{
private:
	int attack;
public:
	Firebat()
	{
		attack = 16;
		health = 50;
		defense = 1;

		cout << "Create Firebat" << endl;
	}

	void Stats()
	{
		cout << "Firebat Health : " << health << endl;
		cout << "Firebat Defense : " << defense << endl;
		cout << "Firebat Attack : " << attack << endl;
	}
};

class Ghost : public Terran
{
private:
	int attack;
public:
	Ghost()
	{
		attack = 10;
		health = 45;
		defense = 0;

		cout << "Create Ghost" << endl;
	}

	void Stats()
	{
		cout << "Ghost Health : " << health << endl;
		cout << "Ghost Defense : " << defense << endl;
		cout << "Ghost Attack : " << attack << endl;
	}
};

int main()
{
#pragma region ĸ��ȭ
	/*Ŭ���� �ȿ� ���� �����Ǿ� �ִ� �Ӽ��� ��ɵ��� �ϳ��� ĸ���� ����� �����͸� �ܺηκ��� ��ȣ�ϸ�,
	����ڿ��� �������̽��� �����Ͽ� Ŭ������ ����� ����ϴ� ���Դϴ�*/


#pragma endregion

#pragma region ���
	/*���� Ŭ������ �Ӽ��� ���� Ŭ������ ����� �� �ֵ��� �������ִ� ����Դϴ�*/

	Terran terran;
	cout << "Terran ��ü�� �޸� ũ�� : " << sizeof(Terran) << endl;

	Marine marine;
	marine.Stats();
	cout << "Marine ��ü�� �޸� ũ�� : " << sizeof(marine) << endl;

	Firebat firebat;
	firebat.Stats();
	cout << "Firebat ��ü�� �޸� ũ�� : " << sizeof(firebat) << endl;

	Ghost ghost;
	ghost.Stats();
	cout << "Ghost ��ü�� �޸� ũ�� : " << sizeof(ghost) << endl;
	/*Ŭ������ ��� ���迡�� ���� Ŭ������ ���� Ŭ������ �Ӽ��� ����� �� ������,
	���� Ŭ������ ���� Ŭ������ �޸𸮰� ���Ե� ���·� �޸��� ũ���� �����˴ϴ�*/
#pragma endregion


	return 0;
}