//Factorial of a Number using Recursion.

#include <iostream>
using namespace std;

int fact(int x)
{
    if (x == 0 || x == 1)
        return 1;
    else
        return x * fact(x - 1);
}

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << n << "! = " << fact(n);
}