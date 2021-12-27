#include <iostream>
#include<string>
#include "CSlice1.h"
using namespace std;

CSlice::CSlice()
{

private:

    int int_start ;
	int int_stop ;
	int int_step ;
	int N;
	int *array;
	
	
public:
     {
        int int_start=0 ;
        int N=0;
	    int int_stop=0 ;
	    int int_step=0;
	    int *array;
     }
     
    void CSLice::Create()
    {
    int m_length;
    cout << "Enter a number of elements in array: ";
	    cin >> m_length;
	    N = m_length;
	    array = new int[m_length];
	    for (int i = 0; i < m_length; i++)
	        {
	            cout << "Enter your element:\n";
		        cin >> array[i];
	        }
	        cout << "\n\n\n";
    }

    void CSlice::Parse()
	{
	    string command1;
    	string start;
    	string stop;
    	string step;
    	
    	cout << "Enter your command. It has to be in the format [start:stop:step]!" << endl;
    	cin >> command1;
    	char begining= command1[0];
    	int length = command1.length();
        
        if(command1[0]=='['&& command1[2]==':') 
        {
            stop=command1[1];
            start ='0';
            step ='1';
        }
        if(command1[length]==']'&& command1[length-2]==':')
        {
            stop=command1[length-1];
            start='0';
            step='1';
        }
        for(int i=0;i<=length;i++) {
            
            if (command1[i+1]==':'&&command1[i+2]==':') {
                start=command1[i];
                stop=command1[i+3];
                step='0';
            }
        }
        if(command1[0]=='['&& command1[3]==']'){
            start='0';
            stop=length;
            step=-command1[2];
        }
        
        int_start=stoi(start);
        int_stop=stoi(stop);
        int_step=stoi(step);
	    
	    for(int i=int_start; i<=int_stop;i++)
	    
	    {
	        cout << array[i] << ", ";
	        i=i+int_step-1;
	    }
	    
	    cout << "\n\n"; 
	}
	
	void CSlice::Delete()
	{
	    delete[] array;
	}

};
