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
	void Attack()
	{
		cout << "Weapon Attack" << endl;
	}
};

class Knuckles : public Weapon
{
	void Attack()
	{
		cout << "Weapon Attack" << endl;
	}
};

int main()
{
#pragma region ������
	/*�������� ���� �ٸ� ��ü�� ������ ����� ���� �ٸ� ������� ó���� �� �ִ� �۾��Դϴ�*/

	/*�������� ������ ������ �Լ��� �Ӽ��� ��������� ���� ���ε��� ���� �ʰ� ����
	�ð��� �Լ��� �Ӽ��� ������ �� �ִ� ���� ���ε��� �����ϰ� �մϴ�*/

#pragma endregion

	return 0;
}