#include <iostream>
#include <stdlib.h>
#include "BASE.h"
using namespace std;
int main() 
{
    int command1;
	int command2;
    FIFO FIFO_stack;
	LIFO FIFO_stack;
	Stack user_stack;

    cout << "*************FIFO and LIFO accounting*************\n\n\n";
    cout << "There is a maximum of ten elements.\n";
    getchar();
	cout << "Do you want to use FIFO or LIFO accounting type?\n\n\n"<< "Press one(1) for LIFO and two(2) for FIFO\n\n\n";
	cin >> command1
		if(command1==1) 
			user_stack=LIFO_stack;
		else user_stack=FIFO_stack;
    do 
    {
    cout << "Pick your function below:\n\n1.push new elements\n 2. pop the oldest element \n 3. print the stack \n 4. delete stack\n 5. exit\n";
    cin >> command2; 
    system("clear"); 
    switch(command2) 
    {
    case 1: user_stack.push ();
            break;
    case 3:user_stack.Print ();
            break;
    case 2:user_stack.pop ();
            break;
    case 4:user_stack.Delete ();
            break;
    case 5: exit(0);
            break;
    }
    } while(command2!=5);
    
return 0;
}