//Power function using recursion.

#include <iostream>
using namespace std;

int power(int x, int y) // O(n)
{
    if (y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}

int power1(int x, int y) // O(logn)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power1(x * x, y / 2);
    else
        return x * power(x * x, (y - 1) / 2);
}

int main()
{
    int a, b;
    cout << "Enter two Numbers : ";
    cin >> a >> b;
    cout << a << "^" << b << " = " << power(a, b) << endl;
    cout << a << "^" << b << " = " << power1(a, b);
}