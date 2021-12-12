#include "Shape.h"
using namespace std;

int main() {
    
    cout << "****************************GRAPHIC REDACTOR****************************\n\n\n";
    cout << "There are two types of shapes:circle and squarem and tfour types of operations:moving, showing, scaling and rotating a shape.\n\n\n"; 

    Circle circle(0,0,5);
    Square square(1,1,2,0);
    double x_move;
    double y_move;
    double xs_move;
    double ys_move;
    double k;
    double k1;
    double angle;
    

    cout << "Initial circle: " << endl;
    circle.show();
    circle.rotate(45);
    cout << "Input the vector for moving\n\n\n";
    cin << x_move;
    cin << y_move;
    circle.move(x_move,y_move);
    cout << "input the coefficient for scaling\n\n\n";
    cin << k;
    circle.scale(k);
    cout << "Final circle:\n";
    circle.show();
    
    cout << "Initial square: " << endl;
    square.show();
    cout << "Input the angle for rotation:\n\n\n";
    cin << angle;
    square.rotate(angle);
    cout << "Input the vector for moving\n\n\n";
    cin << xs_move;
    cin << ys_move;
    square.move(xs_move,ys_move);
    cout << "input the coefficient for scaling\n\n\n";
    cin << k1;
    square.scale(k1);
    cout << "Final square:\n";
    square.show;
   
   
    return 0;
}