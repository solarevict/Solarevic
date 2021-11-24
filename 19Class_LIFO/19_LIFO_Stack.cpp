#include <iostream>
#include <stdlib.h> 
#include <array>
#define MAX 10

using namespace std;

class Stack 
{
    private:
    
    int stack[MAX];
    int last;
    int number;
    
    public:
    
        Stack() 
        {
            last=-1;    
        }
        
        void Push() 
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
        
        void Pop() 
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
                for(i=last;i>=0; i--) 
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
    cout << "*************LIFO STACK*************\n\n\n";
    cout << "There is a maximum of ten elements.\n";
    getchar();
    do 
    {
    cout << "Pick your function below:\n\n1.push new elements\n 2. pop the last element \n 3. print the stack \n 4. delete stack\n 5. exit\n";
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