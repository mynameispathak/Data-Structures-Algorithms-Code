//Power function using recursion.

#include <iostream>
using namespace std;

int power(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}

int main()
{
    int a, b;
    cout << "Enter two Numbers : ";
    cin >> a >> b;
    cout << a << "^" << b << " = " << power(a, b);
}