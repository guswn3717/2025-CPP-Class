#include <iostream>

using namespace std;

class Unit
{
private:
	int health = 0;

	int* kill;

public:
	Unit(int health)
	{
#pragma region this ������
		/*�ڱ� �ڽ��� ����Ű�� �������Դϴ�.*/

#pragma endregion
		this->health = health;

		kill = new int;

		*kill = 0;
	}

	const int & Health()
	{
		return health;
	}

	Unit(const Unit& clone)
	{
		health = clone.health;

		kill = clone.kill;
	}

	~Unit()
	{
		delete kill;
	}
};

int main()
{
#pragma region ���� ������
	/*���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� �������Դϴ�*/

	//Unit marine(40);
	//Unit marine1(marine);


	//cout << marine.Health() << endl;
	//cout << marine1.Health() << endl;

	

	/*���� �����ڸ� �������� �ʰ�, ��ü�� �����ϰ� �Ǹ� �⺻ ���� �����ڰ� ȣ��Ǳ� ������ ���� ����� ��ü�� ����˴ϴ�.*/
#pragma endregion

#pragma region ���� ����
	/*��ü�� ������ �� �ּҰ��� �����Ͽ� ���� �޸� ������ ����Ű�� �ϴ� ���Դϴ�*/

	//int* ptr1 = new int(10);
	//int* ptr2 = ptr1;

	//cout << "\n\t\t\tprt1�� �� : " << *ptr1 << "   \\   prt2�� �� : " << *ptr2 << endl;
	//cout << "\nprt1�� ����Ű�� �ּ� : " << ptr1 << "   \\   prt2�� ����Ű�� �ּ� : " << ptr2 << "\n\n";

	//Unit firebat1(50);
	//
	//Unit firebat2(firebat1);

	/*���� ������ ��� ���� ��ü�� ���� ���� �޸� ������ �����ϰ� �ֱ� ������ �ϳ���
	��ü�� ���� �����ϰ� �Ǹ� ���� ������ ��ü�� �Բ� ������ �޽��ϴ�*/
#pragma endregion


	return 0;
}
