#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter your name:";
    cin >> str1;
    cout << "Hello " << str1 << endl;

    //to get a complete line as an input from user we use getline()
    getline(cin, str2);
    cout << "Hello " << str2 << endl;
}
