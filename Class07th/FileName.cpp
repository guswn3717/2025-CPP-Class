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

	Terran * terran = new Goliath;

	terran->Stats();

	/*���� �Լ��� ���� �ð��� ���� Ŭ������ ���� ������ ���� Ŭ������ �����ǵ� �Լ��� ȣ���� �� �ֽ��ϴ�*/
#pragma endregion
	return 0;
}