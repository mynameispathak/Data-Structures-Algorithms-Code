#include <iostream>
using namespace std;

double e(double x, double n)
{
    double s = 1;
    for (; n > 0; n--)
    {
        s = 1 + (x / n) * s;
    }
    return s;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << "Sum of Taylor Series = " << e(x, n) << endl;
}