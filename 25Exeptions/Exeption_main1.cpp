#include <iostream>
#include <Exeption.h>

using namespace std;


  int main ()
  {
    CRational fraction1 = { 0, 1 }, fraction2 ={0, 1};
    cout << "Enter two fractions via numerators and detominators.\n";
    fraction1.Input ();
    fraction2.Input ();
    cout << "******Your fractions******\n";
    fraction1.Print ();
    fraction2.Print ();
    cout << "Summ of your fractions:\n";
    (fraction1.Summ (fraction2)).Print();
    cout << "Multiplication of your fractions:\n";
    fraction1.Multiply (fraction2);
    cout << "******THE END******\n";
    getchar();
    
    return 0;
  }
