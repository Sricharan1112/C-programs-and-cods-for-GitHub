#include <iostream>
using namespace std;
template <class T1, class T2>
class Sample 
{
    T1 data1;
    T2 data2;
public:
    Sample(T1 a, T2 b) 
	{
        data1 = a;
        data2 = b;
    }
    void display() 
	{
        cout << "Data1: " << data1 << " | Data2: " << data2 << endl;
    }
};

int main() {
    Sample<int, float> s1(10, 20.5);
    s1.display();
    Sample<char, string> s2('A', "Template Example");
    s2.display();
    Sample<string, double> s3("Value", 45.67);
    s3.display();
    return 0;
}
