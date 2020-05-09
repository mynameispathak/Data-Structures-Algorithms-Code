#include <iostream>
using namespace std;

double e(double x, double n)
{
    static double s = 1;
    if (n == 0)
        return s;
    s = 1 + (x / n) * s;
    return e(x, n - 1);
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << "Sum of Taylor Series = " << e(x, n) << endl;
}