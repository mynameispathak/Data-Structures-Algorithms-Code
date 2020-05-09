#include <iostream>
using namespace std;

int TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        cout << "Move tower " << A << " to " << C << endl;
        TOH(n - 1, B, A, C);
    }
}

int main()
{
    int n, A = 1, B = 2, C = 3;
    cout << "Enter the number of disks : " << endl;
    cin >> n;
    TOH(n, A, B, C);
}