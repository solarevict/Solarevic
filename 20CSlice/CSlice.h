#ifndef CSLISE_H
#define CSLICE_H
#include<iostream>

using namespace std;

class Slice
{
private:
	int int_start;
	int int_stop;
	int int_step;
	int flag;
	int N;
	int *array;
	int flag1;
	int flag2;
	int flag3;
public:
	Slice();

	void delete();

	void parser();

	void obj();
};
#endif
