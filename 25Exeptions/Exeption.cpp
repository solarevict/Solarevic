#include <iostream>
#include <Exeption.h>

using namespace std;

    CRational::CRational (int n, int d)
  {
    m_numerator = n;
    m_denominator = d;
  }
  
  void CRational::ReduceFraction ()
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

  CRational::Summ (CRational number2)
  {
    CRational summ = { 0, 1 };
    summ.m_denominator = m_denominator * number2.m_denominator;
    m_numerator =m_numerator* (summ.m_denominator / m_denominator);
    number2.m_numerator = number2.m_numerator*(summ.m_denominator / number2.m_denominator);
    summ.m_numerator = m_numerator + number2.m_numerator;
    summ.ReduceFraction ();
    return summ;
  }

  CRational::Multiply ( CRational number2)
  {
    CRational multiplied = { 0, 1 };
    multiplied.m_denominator=(number2.m_denominator)*(m_denominator)*number2.m_denominator;
    multiplied.m_numerator = ((number2.m_numerator)*(m_numerator));
    multiplied.ReduceFraction();
    cout << multiplied.m_numerator << "/" << multiplied.m_denominator << "\n"; 
    return multiplied;
  }

  void CRational::Input ()
  {
    cin >> m_numerator;
    cin >> m_denominator;
    const char *e;
    try {
    if (m_denominator == 0)
      {
	        throw "division by zero";
      }
    if (m_denominator < 0)
      {
	throw "division by a negative value ";
      } 
    if (m_denominator == m_numerator)
      {
	throw "entered a whole number";
      }   
    }
   catch(const char *e) {
    cout << "ERROR OCCURED: " << e << endl; 
  }
    ReduceFraction ();
  }
  
  void CRational::Print ()
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