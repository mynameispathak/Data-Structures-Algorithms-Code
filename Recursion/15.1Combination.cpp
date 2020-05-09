#include <iostream>
using namespace std;

int fact(int x)
{
    if (x == 0 || x == 1)
        return 1;
    else
        return x * fact(x - 1);
}

int c(int n, int r)
{
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);
    return t1 / (t2 * t3);
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << "nCr = " << c(n, r);
}