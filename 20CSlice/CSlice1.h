#ifndef CSLISE_H
#define CSLICE_H
#include<iostream>

using namespace std;

class Slice
{
private:
	
    int int_start ;
	int int_stop ;
	int int_step ;
	int N;
	int *array;
public:

	void Create();
	
	void Delete();

	void Parse();

};
#endif
