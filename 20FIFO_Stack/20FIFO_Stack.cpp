#include <iostream>
#include <stdlib.h> 
#define MAX 10

using namespace std;

class Stack 
{
    private:
    
    int stack[MAX];
    int last;
    int number;
    int front;
    
    public:
    
        Stack() 
        {
            last=-1;  
            front=0;
        }
        
        void Push()
        
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
        void Pop()
        
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
        
        void Print() 
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
        
        void Delete() 
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
                getchar();
                  
            }
        }
};

int main() 
{
    int command;
    Stack user_stack;
    cout << "*************FIFO QUEUE*************\n\n\n";
    cout << "There is a maximum of ten elements.\n";
    getchar();
    do 
    {
    cout << "Pick your function below:\n\n1.push new elements\n 2. pop the oldest element \n 3. print the stack \n 4. delete stack\n 5. exit\n";
    cin >> command; 
    system("clear"); 
    switch(command) 
    {
    case 1: user_stack.Push ();
            break;
    case 3:user_stack.Print ();
            break;
    case 2:user_stack.Pop ();
            break;
    case 4:user_stack.Delete ();
            break;
    case 5: exit(0);
            break;
    }
    } while(command!=5);
    
return 0;
}
    

