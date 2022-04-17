#pragma once



#include <iostream>
#include <cstdlib>
using namespace std;

template <typename T>
class DynamicQueue
{
private:
	class QueueNode
	{
		friend class DynamicQueue;
		T value;
		QueueNode* next;

		QueueNode(T val, QueueNode* next = nullptr)
		{
			value = val;
			this->next = next;
		}
	};

	// These track the front and rear of the queue
	QueueNode* front;
	QueueNode* rear;
public:
	// Constructor and destructor
	DynamicQueue();
	~DynamicQueue();

	void enqueue(T);
	void dequeue(T&);
	bool isEmpty() const;
	void clear();
};



// Constructor
template <typename T>
DynamicQueue<T>::DynamicQueue()
{
	front = rear = nullptr;
}

// Destructor
template <typename T>
DynamicQueue<T>::~DynamicQueue()
{
	clear();
}
template <typename T>
void DynamicQueue<T>::enqueue(T num)
{
	if (isEmpty())
	{
		front = new QueueNode(num);
		rear = front;
	}
	else
	{
		rear->next = new QueueNode(num);		// Creates the new node at the end of rear
		rear = rear->next;						// Moves to the new rear node
	}
}
template <typename T>
void DynamicQueue<T>::dequeue(T& num)
{
	QueueNode* temp;
	if (isEmpty())
	{
		cout << "The queue the empty.\n";
		exit(1);
	}
	else
	{
		num = front->value;		// Printing purposes only!

		temp = front;
		front = front->next;
		delete temp;
	}
	temp = nullptr;
}
template <typename T>
bool DynamicQueue<T>::isEmpty() const
{
	return (front == nullptr);
}
template <typename T>
void DynamicQueue<T>::clear()
{
	T value;	// Dummy variable

	while (!isEmpty())
	{
		dequeue(value);
	}
}