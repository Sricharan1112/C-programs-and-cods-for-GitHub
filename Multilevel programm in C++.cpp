#include<iostream>
using namespace std;
class A{
	public:
	void charan(){
	cout<<"This is Sricharan"<<endl;}
};
class B{
	public:
	void hello()
	{
		cout<<"This is me as a student"<<endl;
	}
};
class c:public A,public B{
	public:
		void display(){
			cout<<"This is a Young child";
		}
};
int main(){
	c obj;
	obj.charan();
	obj.hello();
	obj.display();
	return 0;
}