#include <iostream>
#include "Terran.h"
#include "Vulture.h"
#include "SiegeTank.h"
#include "Goliath.h"

using namespace std;

int main()
{
#pragma region �����Լ�
	/*����ϴ� Ŭ���� ������ ���� ������ �Լ��� �����ǵ� �� �ִ� �Լ��Դϴ�*/

	//Terran * terran = new Goliath;
	//
	//terran->Stats();
	//
	//cout << "Terran�� �޸� ũ�� : " << sizeof(Terran) << endl;

	/*���� �Լ��� ���� �ð��� ���� Ŭ������ ���� ������ ���� Ŭ������ �����ǵ� �Լ��� ȣ���� �� �ֽ��ϴ�*/
#pragma endregion

#pragma region ���� �Լ� ������
	
	int input = 0;
	int count = 0;

	Terran* pointer = nullptr;

	while (count < 5)
	{
		cout << "Create Unit Number : ";

		cin >> input;

		cout << endl;

		switch (input)
		{
		case 1: pointer = new Vulture();
			break;
		case 2: pointer = new SiegeTank();
			break;
		case 3: pointer = new Goliath();
			break;
		default: continue;
			break;
		}

		count++;

		pointer->Stats();

		cout << endl;
	}
	/*���� �Լ��� �� �� �̻��� ���� �Լ��� �����ϴ� Ŭ������ ���� �� ��ü �ּҿ� ���� �Լ� ���̺��� �߰��մϴ�*/
#pragma endregion

	return 0;
}