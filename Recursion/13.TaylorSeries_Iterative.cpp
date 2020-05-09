#include <iostream>
using namespace std;

double e(double x, double n)
{
    double s = 1;
    double num = 1, den = 1;
    for (int i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }
    return s;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << "Sum of Taylor Series = " << e(x, n) << endl;
}