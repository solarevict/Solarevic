#include <iostream>
#include "Shape.h"

Circle::Circle(double C_x,double C_y, double rad)

{
    C_x=C_x;
    C_y=C_y;
    rad=rad;
}

void Circle::move(double x, double y)
{
    cout << "Moving circle..\n\n\n";
    C_x=C_x+x;
    C_y=C_y+y;
}

void Circle::scale(double strech)
{
    cout << "Scaling circle...\n\n\n";
    rad=rad*strech;
}

void Circle::rotate(double angle)
{
    cout << "Rotating a circle does not change its shape.\n\n\n";
}

void Circle::show()
{
    std::cout << "Your circle: centre(" << C_x << "," << C_y << "), radius: " << rad << std::endl;
}

Square::Square(double S_x, double S_y, double length, double angle)
//angle between axis x and side of the Square
{
	S_x=S_x;
	S_y=S_y;
	length=length;
	angle=angle;
}
void Square::move(double x1, double y1)
{
    cout << "Moving square..\n\n\n";
    S_x=S_x+double x1;
    S_y=S_y+double x2;
}

void Square::scale(double strech1);
{
    cout << "Scaling square...\n\n\n";
    length=length*strech1;
}

void Square::rotate(double angle1);
{
    cout << "Rotating square...\n\n\n";
    angle=angle+angle1;
}

void Square::show()
{
    std::cout << "Your square: centre(" << S_x << "," << S_y << "), side: " << length << std::endl;
}

