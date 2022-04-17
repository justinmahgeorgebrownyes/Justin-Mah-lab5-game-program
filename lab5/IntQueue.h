#pragma once

// Static queue - array implementation

class IntQueue
{
private:
	int* queueArray;	// Array
	int queueSize;		// Capacity
	int front;			// Front of the queue
	int rear;			// Rear  of the queue
	int numItems;		// Number of items in the queue
public:
	IntQueue(int);		// Constructor;
	~IntQueue();		// Destructor
	void enqueue(int);	// Put something on the queue
	void dequeue(int&);	// Take something off the queue
	bool isEmpty() const;
	bool isFull() const;
	void clear();

};