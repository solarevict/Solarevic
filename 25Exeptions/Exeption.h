#ifndef EXEPTION_H
#define EXEPTION_H

class CRational
{
private:
   int m_numerator;
   int m_denominator;
public:
   CRational ();

   void ReduceFraction();
   
   void Summ(CRational number2);
   
   void Multiply(CRational number2);

   void Print();
   
   void Input();
   

};

#endif