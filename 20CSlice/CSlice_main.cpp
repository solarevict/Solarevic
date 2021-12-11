#include <iostream>
#include "CSlice1.h"

using namespace std;


int main()
{
    int command;
    CSlice your_array;
    cout << "***************************SLICE***************************\n" << ;
    getchar();
    do{
    cout << "Pick your function below:\n\n1. Parsing an array \n 3. Slicing the data \n 4. Deleting an array\n 5. Exit\n";
    cin >> command; 
    system("clear"); 
    switch(command) 
    {
    case 3:your_array.Slice();
            break;
    case 1:your_array.Parse();
            break;
    case 4:your_array.Delete();
            break;
    case 5: exit(0);
            break;
    } 
    } while(command!=5);
return 0;
}
