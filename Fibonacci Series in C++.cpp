#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of terms: ";
	cin >> n;
	int x=0, y=1;
	cout << "Fibonacci series: ";
	for(int i=0; i<n; i++)
	{
		cout << x << " ";
		int a = x + y;
		x = y;
		y = a;
	}
    cout << endl;	
    return 0;
}