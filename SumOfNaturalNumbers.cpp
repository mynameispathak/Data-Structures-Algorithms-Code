//Sum of first N natural numbers using recursion.

#include <iostream>
using namespace std;

int sum(int x)
{
    if (x == 0)
        return 0;
    else
    {
        return x + sum(x - 1);
    }
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << "Sum of first " << n << " numbers is : " << sum(n);
}