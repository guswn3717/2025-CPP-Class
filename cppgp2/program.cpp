#include<iostream>

using namespace std;

int data = 1;

int main()
{
#pragma region ��Ʈ��
	/*�ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧�Դϴ�*/

	/* << ���Կ�����)
	�ڽ��� �����ϰ� �ִ� ���� ��ȯ�Ͽ� ����ϴ� �������Դϴ�*/

	//int errorCode = -9999;
	
	//std::cout << "Hello World!" << std::endl;
	//std::cout << "ERROR!" << std::endl;
	//std::cout << "Error Code : " << errorCode << std::endl;

	/* >> (���� ������)
	Ư���� ���� �Է¹��� ���� ���ۿ� �����ϴ� ������ �Դϴ�*/

	//int n = 0;
	
	//std::cin >> n;
	
	//std::cout << "n�� �� : " << n << std::endl;

	
#pragma endregion

#pragma region ���� ���� ������
	/*���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� �������Դϴ�*/

	//int data = 10;
	
	//std::cout << "���� ���� data�� �� : " << data << std::endl;
	//std::cout << "���� ���� data�� �� : " << ::data << std::endl;

	/*���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������
	����Ǿ��� �� ���� ����� ������ ����� ������ �̸��� ����ϴ�
	���� ��Ģ�� �����ϱ� ������ ���� ������ ȣ����� �ʽ��ϴ�*/
#pragma endregion

#pragma region ���� �Ҵ�
	/*���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾��Դϴ�*/

	int* p = new int(99);
	
	std::cout << *p << std::endl;

	*p = 100;

	std::cout << *p << std::endl;

	delete p;
	p = nullptr;

	//======================================================
	cout << endl;

	p =  new int[3];

	p[0] = 10;
	p[1] = 20;
	p[2] = 30;

	cout << "p�� ����Ű�� �ּ� : " << p << endl;

	cout << p[0] << endl;
	cout << p[1] << endl;
	cout << p[2] << endl;

	delete[] p;

#pragma endregion


	return 0;
}