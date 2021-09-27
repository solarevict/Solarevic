#include <iostream>
#include <string>

using namespace std;
int main() 
{
    string data;
    int j = 0;
    bool success = false;
    bool input = false;
    int number;
    int first = 1;
    int second = 1;
    int summ = 0;
   
 cout << "Enter a whole number between 1 and 100.\n";
      
    while(!success) {
        
    getline(cin, data);
    int lens= data.length();
    
    for(int i=0;i<=lens;i++) 
    {
        if(!isdigit(data[i]) && data[i]!='\0' && data[i]!='-') 
        {
            input = false;
        }
        else if(isdigit(data[i])) 
        {
            input = true;
        }
    }
    
    if(!input) 
    {
        cout << "You entered a string or a non-integer number. Try again.\n";
        success=false;
    }
    else  
    {
        number = std::stoi(data);
        
        if(number<1) 
        {
            cout << "Your number is smaller than 1. Try entering a higher value.\n";
            success=false;
        }
        else if(number>100)
        {
            cout << "Your number is bigger than 100. Try entering a smaller value.\n";
            success=false;
        }
        else 
        {
            cout << "Your series is: ";
            cout << first << ", ";
            cout << second << ", ";
            for(int i=0; i<(number-2);i++) 
            {
                summ = first+second;
                cout << summ << ", " ; 
                first = second;
                second = summ;
            }
            success=true;
			getchar();
        }
    }
}
return 0;
}