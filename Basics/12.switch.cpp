//Program to Demonstrate switch case
/*
• Switch is a branch and control statement
• Switch can have 0 or more cases
• Each case is defined with a label
• Depending on the value of expression in switch corresponding case black is executed
• Is a case block is not available then default block is executed
• Default block is optional
• Every case block must terminate with break
• If breaks are not mentioned then cases will fall thru
• Switch is used for menu-driven programs*/
#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter a day no. :" << endl;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid day no." << endl;
    }
    return 0;
}