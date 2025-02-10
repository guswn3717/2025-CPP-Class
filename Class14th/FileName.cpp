#include<iostream>
#include<stack>
#include<Queue>

using namespace std;

int main()
{
#pragma region stack
	std::stack<int> stack;

	//stack.push(10);
	//stack.push(20);
	//stack.push(30);
	//
	//cout << "Stack Size : " << stack.size() << endl;
	//
	//while (stack.empty() == false)
	//{
	//	cout << stack.top() << endl;
	//
	//	stack.pop();
	//}

#pragma endregion

#pragma region Queue
	std::queue<int> queue;

	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);
	queue.push(50);

	cout << "Queue Size : " << queue.size() << endl;

	while (queue.empty() == false)
	{
		cout << queue.front() << endl;

		queue.pop();
	}

#pragma endregion

	return 0;
}