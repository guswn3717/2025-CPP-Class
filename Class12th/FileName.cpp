#include<iostream>
#include<thread>

using namespace std;

void Input()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Input..." << endl;
	}
}

void Renderer()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Renderer" << endl;
	}
}

int main()
{
#pragma region ������ 
	//���μ��� ������ ����Ǵ� �ϳ��� �۾� �����Դϴ�
	/*std::thread thread1(Input);
	std::thread thread2(Renderer);

	thread1.join();
	thread2.join();*/
#pragma endregion

	return 0;
}