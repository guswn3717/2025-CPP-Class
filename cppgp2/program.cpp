#include <iostream>

using namespace std;

class GameObject
{
#pragma region ���� ������
	/*Ŭ���� ���ο� ���ԵǾ� �ִ� �Ӽ��� ���� ������ �����ϴ� �������Դϴ�*/

	/*public : Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���� �׸��� Ŭ���� �ܺο�����
			   ���� ������ �����ϴ� �������Դϴ�*/

	/*protected : Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���������� ������ ����ϴ�
			   ������ �Դϴ�*/

	/*private : Ŭ���� ���α����� ������ ����ϴ� �����մϴ�*/
#pragma endregion
private:
	int x;
protected:
	int y;
public:
	int z;

	int Z()
	{
		return z;
	}
};

void Swap(int & x, int & y)
{
	int temporary = x;
	x = y;
	y = temporary;
}

int main()
{
#pragma region Ŭ����
	/*����� ���� Ŭ������ ���� ��ü�� �����Ͽ� �����ϰ� ����ϴ� ����ü �Դϴ�*/

	//GameObject gameObject; // [ ] -> Stack
	//GameObject gameObject0; // [ ] -> Stack
	//GameObject gameObject1; // [ ] -> Stack
	//
	//
	//gameObject.Z();
	//
	//gameObject.z = 5;
	//gameObject0.z = 10;
	//gameObject1.z = 20;
	//
	//std::cout << "gameObject�� z�� : " << gameObject.Z() << std::endl;
	//std::cout << "gameObject�� z�� : " << gameObject0.Z() << std::endl;
	//std::cout << "gameObject�� z�� : " << gameObject1.Z() << std::endl;



	/*Ŭ������ ��� Ŭ���� ���ο� �ִ� ������ Ŭ������ �޸� ������ ���Ե�����, ���� ������ �Լ���
	�޸𸮴� Ŭ���� ������ ���Ե��� �ʽ��ϴ�*/
#pragma endregion

#pragma region ������
	
	/*� ������ �޸� ������ �ٸ� �̸��� �����ϴ� �������Դϴ�*/

	int a = 10;
	int b = 20;

	Swap(a, b);

	std::cout << "a�� �� : " << a << std::endl;
	std::cout << "b�� �� : " << b << std::endl;


#pragma endregion
}