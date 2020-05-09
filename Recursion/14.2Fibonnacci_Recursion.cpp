#include <iostream>
using namespace std;

int fib(int x)
{
    //cout << " ";
    int arr[10];
    if (x <= 1)
    {
        return x;
    }
    else
        return fib(x - 2) + fib(x - 1);
}

int main()
{
    int n, arr[10];
    cout << "Enter the number of terms : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = fib(i);
        cout << arr[i] << " ";
    }
}