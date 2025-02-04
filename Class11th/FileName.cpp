#include<iostream>

using namespace std;

class Packet
{
public:
	Packet()
	{
		cout << "Created Packet" << endl;
	}

	const int& Errorcode()
	{
		return -999;
	}

	~Packet()
	{
		cout << "Release Packet" << endl;
	}
};

class Resource
{
public:
	Resource()
	{
		cout << "Created Resource" << endl;
	}

	~Resource()
	{
		cout << "Release Resource" << endl;
	}
};

int main()
{
#pragma region ����Ʈ ������
	/*�����͸� �ùķ��̼��ϴ� ���ÿ� �ڵ����� �޷θ� ������ ���ָ�, ���
	Ȯ�� �� ���� �߰� ����� �����ϴ� �߻� ������ ������ �����Դϴ�*/

	//int* pointer2 = nullptr;
	//
	//{
	//	int * pointer1 = new int;
	//
	//	*pointer1 = 100;
	//
	//	pointer2 = pointer1;
	//}
	//
	//cout << "pointer�� ����Ű�� �� : " << *pointer2 << endl;

#pragma region unique pointer
	/*Ư���� ��ü�� �ϳ��� ����Ʈ �����͸� ����ų �� �ֵ��� �Ǿ� �ִ� �������Դϴ�*/

	//unique_ptr<Packet> uniquePointer = make_unique<Packet>();
	//
	//cout << "uniquePointer Error Code : " << uniquePointer->Errorcode() << endl;
	//
	//unique_ptr<Packet> uniqueReference = std::move(uniquePointer);
	//
	//cout << "uniquePointer Error Code : " << uniquePointer->Errorcode() << endl;
	//
	//cout << "uniqueReference Error Code : " << uniqueReference->Errorcode() << endl;

#pragma endregion

#pragma region shared pointer
	/*�ϳ��� �ڿ� ��ü�� ���� ������ ��ü�� �⸮ų �� ������, ��� ������ ��ü�� �ڿ�
	��ü�� �ʿ����� ���� �� �ڿ� ��ü�� �����ϵ��� ����Ǿ� �ִ� �������Դϴ�*/

	shared_ptr<Resource> oil = make_shared<Resource>();

	cout << "Reference Count : " << oil.use_count() << endl;

	shared_ptr<Resource> mineral = oil;

	cout << "Reference Count : " << oil.use_count() << endl;

#pragma endregion


#pragma endregion

	return 0;
}