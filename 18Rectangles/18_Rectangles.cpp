#include <iostream>

using namespace std;

class CRectangleClass 
{
    private: int m_pointx1;
             int m_pointx2;
             int m_pointy1;
             int m_pointy2;
             
    public:
    
    CRectangleClass(int x1=0, int x2=1, int y1=1, int y2=0):
    
        m_pointx1(x1),
        m_pointy1(y1),
        m_pointx2(x2),
        m_pointy2(y2)
    {    
    }
    
    int Getx1() {return m_pointx1;}
    int Getx2() {return m_pointx2;}
    int Gety1() {return m_pointy1;}
    int Gety2() {return m_pointy2;}
    
    void Print() 
    {
        cout << "Your rectangle: \n";
        cout << "Diagonal points:\n (" << m_pointx1 << "," << m_pointy1 << "), ";
        cout << "(" << m_pointx2 << ", " << m_pointy2 << ")\n";
        cout << "Remaining points: (" << m_pointx1 << "," << m_pointy2 << "), (" << m_pointx2 << ", " << m_pointy1 << ")\n";
        cout << "Length: " << abs(m_pointx2-m_pointx1) << "\n" << "Width: " << abs(m_pointy2-m_pointy1) << "\n\n\n";
    }
    
    void Input() 
    {
    cin >> m_pointx1;
    cin >> m_pointy1;
    cin >> m_pointx2;
    cin >> m_pointy2;
    if (m_pointx2-m_pointx1 == 0 or m_pointy2-m_pointy1==0)
      {
	cout << "Length cannot be zero!Your rectangle does not exist." << endl;
	exit (0);
      }
    }
    
    bool  Condition(CRectangleClass rectangle2) 
    {
        if(m_pointy1 < rectangle2.m_pointy2 || m_pointy2 > rectangle2.m_pointy1 || m_pointy2 < rectangle2.m_pointx1 || m_pointx1 > rectangle2.m_pointx2) 
        {
            return true;
        } 
        else return false;
    }
    
};

int main() 
{
    CRectangleClass rectangle1;
    CRectangleClass rectangle2;
    cout << "Enter diagonal points of your rectangles. Each point has x and y coordinate.\n";
    rectangle1.Input();
    rectangle1.Print();
    rectangle2.Input();
    rectangle2.Print();
    if(rectangle1.Condition(rectangle2)) cout <<  "Your rectangles intersect." << endl;
    else 
    cout << "Your rectangles do not intersect." << endl;
    getchar();
    
    
    return 0;
}
