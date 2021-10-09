#include<iostream>
#include<stdio.h>
using namespace std;

int main() {

//BUBBLESORT
	int k, n, i,l;

	cout << "Enter an integer number." << endl;
	cin >> n;
    cout << "Enter your array" << endl;
	int A[n];

	for (i=0; i<n; i++) 
	{
		cin >> A[i];
		
	}
    for(l=0;l<n-1;l++) 
    {
		for(i=0;i<n;i++) 
		{
			if (A[i] > A[i+1])
			{
				swap(A[i],A[i+1]);
			}
        }
    
    
        for (i=0; i<n; i++) 
    	{
	    	cout << A[i] << ", ";
    	}
    
	cout << "\n";
    }
    getchar();
    
return 0;
}


void swap_nums1(int m, int n) 

{
	int temp=0;
	temp=m;
	m=n;
	n=temp;

}

void swap_nums2(int m, int n) 

{
	m=m*n;
	n=m/n;
	m=m/n;
}

void swap_nums3(int m , int n) 

{
	swap(m, n);
   
}