#include<iostream>

using namespace std;

template <typename T>
class List
{
private:
	int size;
	int index;

	T* pointer;
public:
	List()
	{
		size = 0;
		index = 0;
		pointer = nullptr;
	}
	
	void Resize(int size)
	{
		this->size = size;

		pointer = new T[size];

		for (int i = 0; i < size; i++)
		{
			pointer[i] = 0;
		}
	}

	void Add(T data)
	{
		if (index >= size)
		{
			cout << "Index Out of Range" << endl;
		}
		else
		{
			pointer[index++] = data;
		}
	}

	const T& operator [] (int index)
	{
		return pointer[index];
	}

	~List()
	{
		//if (operator != nullptr)
		//{
		//	delete [] pointer;
		//}
	}
};

template <typename T>
bool Same(T argument, T parameter)
{
	return argument == parameter;
}

template<>
bool Same(const char* argument, const char* parameter)
{
	cout << "Template Specialization" << endl;

	return strlen(argument) == strlen(parameter);
}

int main()
{
#pragma region ���ø�
	/*������ ���Ŀ� �������� �ʰ�, �ϳ��� ���� ���� �ٸ� ������ ������
	���� �� �ִ� ����� ������ �ξ� ���뼺�� ���� �� �ִ� ����Դϴ�*/

	//List<int> list;
	//
	//list.Resize(5);
	//
	//list.Add(1);
	//list.Add(2);
	//list.Add(3);
	//list.Add(4);
	//list.Add(5);
	//list.Add(6);
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << list[i] << endl;
	//}

#pragma endregion

#pragma region ���ø� Ư��ȭ
	/*Ư�� �ڷ����� ���� �ٸ��� ó���ϰ� ���� ��� Ư���� �ڷ����� �ٸ� �������� ���۽�Ű�� ���ø� ����Դϴ�*/

	cout << Same('A', 'B') << endl;
	cout << Same(15.7f, 12.5f) << endl;
	cout << Same(10, 10) << endl;

	cout << Same('Ap', 'Ap') << endl;

#pragma endregion

	return 0;
};