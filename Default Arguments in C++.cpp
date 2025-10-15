#include<iostream>
using namespace std;
class Rectangle 
{
private:
    int length, width;

public:
    Rectangle(int l = 10, int w = 5) 
	{
        length = l;
        width = w;
    }
    int area() 
	{
        return length * width;
    }
};
int main() 
{
    Rectangle r1;           
    Rectangle r2(7);       
    Rectangle r3(7, 4);     
    cout << "Area of r1: " << r1.area() << endl; 
    cout << "Area of r2: " << r2.area() << endl; 
    cout << "Area of r3: " << r3.area() << endl; 

    return 0;
}