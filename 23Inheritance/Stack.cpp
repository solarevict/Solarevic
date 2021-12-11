#include<iostream>
#include <stdlib.h>
#include "BASE.h"
#define MAX 10


using namespace std;

Stack::Stack()
{
	last=-1;
	front=0;
}

Stack::Print()
        {
            
            if(last==-1) 
            {
                cout << "There are no elements in your stack" << endl; 
            }
            else 
            {
                int i=last;
                cout << "Your elements are: \n";
                for(i=front;i<=last; i++) 
                {
                    cout << stack[i] << " ";
                }
            cout << "\n\n\n";
                
            }
            
        }
Stack::Delete()
{
	if(last==-1) 
            {
                cout << "Your stack is already empty\n";
            }
            else 
            {
                int i=last;
                for(i=last; i>=0;i--) 
                {
                    stack[i] = {};
                }
                cout << "deleting... \n";
                last=-1;
                getchar()
}

LIFO::LIFO()
	:Stack()
{
}

FIFO::FIFO()
	:Stack()
{
}

void LIFO::push(int value)
{
	 if(last==MAX-1) 
            {
                cout << "There is already maximum number of elements in the stack." << endl;
                getchar();
            }
            else
            {
                cout << "Enter your element: \n";
                cin >> number;
                last++;
                stack[last]=number;
            }
}

int LIFO::pop()
{
	
            if(last==-1) 
            {
                cout << "Error. Stack underflow." << endl;   
                getchar();
            }
            else 
            {
                number=stack[last];
                last--;
                cout << "The number popped is: " << number << endl;
}

void FIFO::push(int value)
{
	 int current;
        
        if (last == MAX - 1)
        cout << "Error.Queue Overflow\n"; 
        
        else
        {
            if (front == - 1)
                front = 0;
                cout << "Enter your element:\n";
                cin>>current;
                last++;
                stack[last] = current;
        }
}

int FIFO::pop()
{
	if (front == - 1 || front > last)
            {
                cout<<"Queue Underflow \n";
            }
            else
            {
                cout<<"The deleted element in the queue is: " << stack[front] <<endl;
                front++;
            }
}