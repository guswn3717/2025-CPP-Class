#include<iostream>
#include<thread>
#include<list>
#include<deque>

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
#pragma region 쓰레드 
	//프로세스 내에서 실행되는 하나의 작업 단위입니다
	/*std::thread thread1(Input);
	std::thread thread2(Renderer);

	thread1.join();
	thread2.join();*/
#pragma endregion

#pragma region list container

	/*std::list<int> list;

	list.push_back(20);
	list.push_back(30);

	list.push_front(10);

	list.pop_front();

	cout << "List의 크기" << list.size() << endl;

	list.assign(3, 5);

	cout << "List의 크기" << list.() << endl;*/

#pragma endregion

#pragma region deque container

	/*std::deque<int> deque;

	deque.push_back(10);
	deque.push_back(15);
	deque.push_back(5);

	deque.push_back(20);
	deque.push_back(10);
	deque.push_back(5);

	for (int i = 0; i < deque.size(); i++)
	{
		cout << deque[i] << " ";
	}*/

#pragma endregion

	return 0;
}