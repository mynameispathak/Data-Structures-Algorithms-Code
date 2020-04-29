//Program to Demonstrate Short Circuit
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5, i = 5;
    //if the first condition is FALSE then the second condition is not evaluated.
    //this is called Short Circuit.
    if (a < b && ++i <= b) //first FALSE, second not evaluated.
    {
    }
    cout << i << endl;
    if (a > b && ++i <= b) //first TRUE, second evaluated.
    {
    }
    cout << i << endl;
    if (a < b || ++i <= b) //first and second both evaluated because of OR.
    {
    }
    cout << i << endl;
}