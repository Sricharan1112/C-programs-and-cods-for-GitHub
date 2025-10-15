#include<iostream>
using namespace std;
class A
{
	public:
		void charan()
		{
			cout<<"I am Sricharan"<<endl;
		}
};
class B:public A
{
	public:
		void student()
		{
		    cout<<"Student of Aditya University"<<endl;	
		}
};
class C:public A,public B
{
	public:
	    void display()
	    {
		    cout<<"I am a young student"<<endl;
	    }
};
int main()
{	 		
	C obj;
	obj.charan();
	obj.student();
	obj.display();
	return 0
          