#include <iostream>
using namespace std;

enum day
{
    mon,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
};

typedef int marks;

int main()
{
    day d1 = mon;
    cout << d1 << endl;

    cout << tue << endl;

    //enum type values cannot be modified
    //mon++;

    //typedef increases the readability of program.
    //The user can easily understand that m1 and m2 are used to store the marks.
    marks m1, m2;
    m1 = 90;
    m2 = 95;
    cout << m1 << " " << m2 << endl;
}