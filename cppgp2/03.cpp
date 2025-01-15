#include <iostream>

using namespace std;

class Object
{
private:
	static int count;

public:
	Object()
	{
		cout << "Created Object" << endl;
	}

	~Object()
	{
		count++;

		cout << "Kill Count : " << count << endl;

		cout << "Destory Object" << endl;
	}
};

namespace Austraila
{
	int area = 36687;
 
	void Size()
	{
		std::cout << "Austraila Area :" << area << std::endl;
	}
}

namespace China
{
	int area = 987663;

	void Size()
	{
		std::cout << "China Area :" << area << std::endl;
	}
}

using namespace Austraila;

int Object::count = 0;

int main()
{
#pragma region �̸� ����
	/*�Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�*/

	//Austraila::Size();
	//China::Size();

#pragma endregion

#pragma region ������
	/*Ŭ������ �ν��Ͻ��� �����Ǵ� �������� �ڵ����� ȣ��Ǵ� Ư���� ��� �Լ��Դϴ�*/

	//Object object;

	/*�������� ��� ��ü�� �������� �� �� �� ���� ȣ��Ǹ� �����ڴ� ��ȯ���� ��������
	�ʱ� ������ �����ڰ� ȣ��Ǳ� ������ ��ü�� ���� �޸��� �Ҵ���� �ʽ��ϴ�*/
#pragma endregion

#pragma region �Ҹ���
	/*��ü�� �Ҹ�� �� �ڠ����� ����Ǵ� Ŭ������ ��� �Լ��Դϴ�*/

	Object* object1 = new Object;
	Object* object2 = new Object;
	Object* object3 = new Object;

	delete object1;
	delete object2;
	delete object3;

	/*�Ҹ��ڴ� ��ü�� �޸𸮿��� ������ �� �� �� ���� ȣ��Ǹ�, �Ҹ��ڿ��Դ� ������
	�����Ͽ� ����ϱ�*/
#pragma endregion


	return 0;
}