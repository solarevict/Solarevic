#include <iostream>
#include "CSlice1.h"

using namespace std;


int main()
{
    CSlice your_array;
    cout << "***************************CLASS SLICE***************************\nPress Enter to continue.";
    getchar();
    cout << "Create your Slice object!" <<endl;
    your_array.Create();
    string command;
	your_array.Parse();
    
getchar();
return 0;
}
