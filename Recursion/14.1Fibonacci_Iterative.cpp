#include <iostream>
using namespace std;

int fib(int n)
{
    int t0 = 0, t1 = 1, s = 0;
    if (n <= 1)
        return n;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
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