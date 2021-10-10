#include <iostream>
#include <stdio.h>
using namespace std;

void swap_num1(int *first, int *second) 
{
	int temp;
	temp=*first;
	*first=*second;
	*second=temp;
}

void swap_num2(int *first, int *second) 
{
	*first = (*first)*(*second);
	*second = (*first) / (*second);
	*first=(*first) / (*second);
}

void swap_num3(int *first, int *second) 
{
	*first = *first+ *second;
	*second = *first - *second;
	*first = *first- *second;
}

void swap_num4(int *first, int *second) 
{
	*first= *first ^ *second;
	*second = *first ^ *second;
	*first = *first ^ *second;
}

int main() 
{
	int a, b;
	cout << "SWAPPING NUMBERS\n" << "Enter two integer numbers.\n" ;
	cin >> a;
	cin >> b;

	swap_num1(&a,&b);
	cout << a << "\n" << b;
	getchar();

	return 0;


}