#ifndef BASE_H
#define BASE_H

#include<iostream>

using namespace std;

class Stack
{
public:
	int stack[MAX];
    int last;
    int number;
    int front;
	Stack();
	Delete();
	Print();
	virtual void push(int value) = 0;

	virtual int pop() = 0;
};

class FIFO: public Stack
{
public:
	FIFO();

	virtual void push(int value);

	virtual int pop();
};

class LIFO: public Stack
{
public:
	LIFO();

	virtual void push(int value);

	virtual int pop();
};
#endif