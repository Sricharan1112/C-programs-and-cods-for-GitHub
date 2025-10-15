#include <iostream>
using namespace std;
template <class T>
void bubbleSort(T arr[], int n) 
{
    for (int i=0; i<n-1; i++)  
    {
        for (int j=0; j<n-i-1; j++)  
        {
            if (arr[j] > arr[j + 1]) 
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
template <class T>
void display(T arr[], int n) 
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() 
{
    int arr1[] = {5, 2, 9, 1, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    float arr2[] = {3.4, 1.2, 5.6, 2.1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Original Integer Array: ";
    display(arr1, n1);
    bubbleSort(arr1, n1);
    cout << "After sorting (int): ";
    display(arr1, n1);

    cout << "Original Float Array: ";
    display(arr2, n2);
    bubbleSort(arr2, n2);
    cout << "After sorting (float): ";
    display(arr2, n2);

    return 0;
}