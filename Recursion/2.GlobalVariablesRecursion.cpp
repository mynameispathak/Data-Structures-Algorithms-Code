//Static Variables in Recursion

#include <iostream>
using namespace std;

int x = 0;

int fun(int n)
{
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int a = 5;
    int r;
    r = fun(a);
    cout << r << endl;
    cout << x << endl;

    r = fun(a);
    cout << r << endl;
    cout << x;

    return 0;
}