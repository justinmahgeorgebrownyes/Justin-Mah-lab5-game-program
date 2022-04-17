#include <iostream>
#include "DynamicQueue.h"
#include "DynamicStack.h"

using namespace std;

int main()
{
	DynamicStack<int> stack;	// notice! no capacity needed!
	int catchvar;

	cout << "int dynamic stack" << endl;

	// push values
	for (int i = 5; i <= 25; i += 5)
	{
		cout << "push: " << i << endl;
		stack.push(i);
	}
	cout << endl;

	// pop values
	for (int i = 0; i < 5; i++)
	{
		cout << "pop: ";
		stack.pop(catchvar);
		cout << catchvar << endl;
	}

	//cout << "attempt to pop again...";
	//stack.pop(catchvar); // ???

	


	DynamicStack<char> stack1;	// Notice! No capacity needed!
	char catchVar1 ;

	cout << "char dynamic stack" << endl;

	// Push values
	for (int i = 5; i <= 25; i += 5)
	{
		char hi = i;
		cout << "Push: " << hi << endl;
		stack1.push(hi);
	}
	cout << endl;

	// Pop values
	for (int i = 0; i < 5; i++)
	{
		cout << "Pop: ";
		stack1.pop(catchVar1);
		cout << catchVar1 << endl;
	}

	//cout << "Attempt to pop again...";
	//stack1.pop(catchVar1);

	//return 0;



	DynamicQueue<int> iQueue;

	cout << "dynamic queue int" << endl;

	cout << "Enqueue 5 items...\n";

	for (int i = 1; i <= 5; i++)
	{
		iQueue.enqueue(i * i);
	}

	cout << "The values in the queue were: \n";
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << " ";
	}
	cout << endl;

//	return 0;



	DynamicQueue<string> iQueue1;

	cout << endl << "dynamic queue string" << endl;

	cout << "Enqueue 5 items...\n";

	for (int i = 1; i <= 5; i++)
	{
		iQueue1.enqueue(" hello" + i);
	}

	cout << "The values in the queue were: \n";
	while (!iQueue1.isEmpty())
	{
		string value;
		iQueue1.dequeue(value);
		cout << value << " ";
	}
	cout << endl;

	return 0;

}