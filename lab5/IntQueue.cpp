#include "IntQueue.h"
#include <iostream>
#include <cstdlib>
using namespace std;

// Constructor
IntQueue::IntQueue(int s)
{
	queueArray = new int[s];	// Dynamically allocated array of ints of size s
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;
}

IntQueue::~IntQueue()
{
	delete[] queueArray;
}

void IntQueue::enqueue(int num)
{
	if (isFull())
	{
		cout << "The queue is full.\n";
		exit(1);	// Don't do this
	}
	else
	{
		// Calculate the new rear position
		rear = (rear + 1) % queueSize;	// <-- Used to wrap around a set of items -- "Array bounding"
		// Insert the new item
		queueArray[rear] = num;
		// Update the item count
		numItems++;
	}
}

void IntQueue::dequeue(int& num)
{
	if (isEmpty())
	{
		cout << "The Queue is empty.\n";
		exit(1);
	}
	else
	{
		// Move front
		front = (front + 1) % queueSize;
		// Retrieve the front item
		num = queueArray[front];
		numItems--;
	}
}

bool IntQueue::isEmpty() const
{
	return !(numItems > 0);
}

bool IntQueue::isFull() const
{
	return !(numItems < queueSize);
}

void IntQueue::clear()
{
	front = rear = -1;
	numItems = 0;
}