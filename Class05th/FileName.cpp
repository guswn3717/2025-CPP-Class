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
		cout << "Created Terran" << endl;
	}
};

class Marine : public Terran
{
private:
	int attack;
public:
	Marine()
	{
		cout << "Created Marine" << endl;
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

	//Terran terran;

	//Marine marine;

	/*Ŭ������ ��� ���迡�� ���� Ŭ������ ���� Ŭ������ �Ӽ��� ����� �� ������,
	���� Ŭ������ ���� Ŭ������ �޸𸮰� ���Ե� ���·� �޸��� ũ���� �����˴ϴ�*/
#pragma endregion


	return 0;
}