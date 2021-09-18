#include <iostream>
#include <string>

using namespace std;
int main() {
	string name;
	cout << "Please enter a name:\n" ;
	getline(cin, name);
	cout << "Hello " << name;
	getchar ();
}