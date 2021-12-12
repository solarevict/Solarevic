#ifndef SHAPE_H
#define SHAPE_H

#include<iostream>

using namespace std;

class Shape
{
public:
    void move(double,double);
    virtual void rotate(double)=0;
    virtual void scale(double)=0;
    virtual void show()=0;
};

class Circle :public Shape
{
private:
    double C_x;
    double C_y;
    double rad;
    
public:
    Circle(double, double, double);
    virtual void rotate(double);
    virtual void scale(double);
    virtual void show();
        
};

class Square :public Shape
{
private:

    double S_x;
    double S_y;
    double length;
    double angle;
    
public:
   Square(double, double, double, double);
   virtual void rotate(double);
   virtual void scale(double);
   virtual void show();
};
#endif