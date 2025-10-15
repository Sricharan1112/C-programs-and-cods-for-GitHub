#include <iostream>
using namespace std;
template <typename T>
T findLargest(T a, T b) 
{
    return (a > b) ? a : b;
}
int main() 
{
    cout << "Largest of 10 and 20: " << findLargest(10, 20) << endl;
    cout << "Largest of 5.5 and 2.3: " << findLargest(5.5, 2.3) << endl;
    cout << "Largest of 'A' and 'Z': " << findLargest('A', 'Z') << endl;

    return 0;
}
