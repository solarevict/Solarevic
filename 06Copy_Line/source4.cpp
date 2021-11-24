#include <iostream>
#include <cstdio>
#include <cstring>

//fifth program

using namespace std;

int main() {
	char line1[150], line2[150];	
	int i;
	gets(line1);
	for (i=0; i<=strlen(line1);i++) {
			line2[i] = line1[i];
			} 
	cout << line2 << "\n";
	getchar();
	return 0;
	} 