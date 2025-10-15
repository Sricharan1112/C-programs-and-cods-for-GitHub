#include<iostream>
using namespace std;
class Shape
{
	public:
		void draw()
		{
			cout<<"Drawing a shape"<<endl;
		}
};
class Circle:virtual public Shape
{
	public:
		void area()
		{
			cout<<"Area of Circle=(3.14)r^2"<<endl;
		}
};
class Square:virtual public Shape
{
	public:
		void area()
		{
			cout<<"Area of Square= a^2"<<endl;
		}
};
int main()
{
	Square obj;
	obj.draw();
	obj.area();
	obj.area();
	return 0;
}