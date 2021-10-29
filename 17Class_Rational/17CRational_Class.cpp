#include<iostream>

using namespace std;

int
gcd (int a, int b)
{
  if (a % b == 0)
    return b;
  if (b % a == 0)
    return a;
  if (a > b)
    return gcd (a % b, b);
  return gcd (a, b % a);
}

class CRational
{
public:

  int m_numerator, m_denominator;

    CRational (int n, int d)
  {
    m_numerator = n;
    if (d == 0)
      {
	cout << "Denominator cannot be zero!" << endl;
	exit (0);
      }
    else
        m_denominator = d;
  }

  CRational ReduceFraction ()
  {
      int m=gcd(m_numerator, m_denominator);
    if (m > 1)
      {
	m_numerator = m_numerator/m;
	m_denominator = m_denominator/m;
	
      }
    CRational reduced={m_numerator, m_denominator};
    return reduced;
  }

  CRational Summ (CRational number2)
  {
    CRational summ = { 0, 1 };
    summ.m_denominator = m_denominator * number2.m_denominator;
    m_numerator =m_numerator* (summ.m_denominator / m_denominator);
    number2.m_numerator = number2.m_numerator*(summ.m_denominator / number2.m_denominator);
    summ.m_numerator = m_numerator + number2.m_numerator;
    summ.ReduceFraction ();
    return summ;
  }

  CRational Multiply ( CRational number2)
  {
    CRational multiplied = { 0, 1 };
    multiplied.m_denominator=(number2.m_denominator)*(m_denominator)*number2.m_denominator;
    multiplied.m_numerator = ((number2.m_numerator)*(m_numerator));
    multiplied.ReduceFraction();
    cout << multiplied.m_numerator << "/" << multiplied.m_denominator << "\n"; 
    return multiplied;
  }

  void Input ()
  {
    cin >> m_numerator;
    cin >> m_denominator;
    if (m_denominator == 0)
      {
	cout << "Denominator cannot be zero!" << endl;
	exit (0);
      }
    ReduceFraction ();
  }
  void Print ()
  {
    if (m_numerator / m_denominator)
      {
    	if(!(m_numerator%m_denominator)) 
    	{
    	    cout << m_numerator/m_denominator << endl;
    	}
    	else if (m_numerator%m_denominator) 
    	    cout << m_numerator/m_denominator << " " << m_numerator-((m_numerator/m_denominator)*m_denominator) << "/" << m_denominator << "\n";
	  }
	else
	  cout << m_numerator <<"/"<< m_denominator << "\n";

      }
  
};
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


