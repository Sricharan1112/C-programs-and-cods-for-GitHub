#include<iostream>
using namespace std;
class A{
	public:
	    void sai()
	    {
	        cout<<"this is charan"<<endl;
	    }
};
class B:virtual public A
{
	public:
	    void hello()
	    {
		    cout<<"this is me as a student"<<endl;
	    }
};
class c:virtual public A
{
	public:
		void display()
		{
			cout<<"this is me as a young child"<<endl;
		}
};
class d:public B,public c
{
	public:
		void detail()
		{
			cout<<"I am from India";
		}
};
int main(){
	d obj;
	obj.sai();
	obj.hello();
	obj.display();
	obj.detail();
	return 0;
}