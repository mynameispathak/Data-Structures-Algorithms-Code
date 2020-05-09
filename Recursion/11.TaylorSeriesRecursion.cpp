#include <iostream>
using namespace std;

int power(int a, int b) // O(logn)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
        return power(a * a, b / 2);
    else
        return a * power(a * a, (b - 1) / 2);
}

float fact(int a)
{
    if (a == 0 || a == 1)
        return 1;
    else
        return a * fact(a - 1);
}

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    else
    {
        r = e(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    //Method I
    float summ = 0;
    for (int i = 0; i < n; i++)
    {
        summ += power(x, i) / fact(i);
    }
    cout << "Sum of Taylor Series = " << summ;
    
    //Method II
    double sum_r = e(x, n);
    cout << "\nSum using Recursive Sum function = " << sum_r;
}