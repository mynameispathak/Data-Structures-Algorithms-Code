#include <iostream>
using namespace std;
int main()
{
    char a = 'A';
    cout << a << endl;
    char b = 65;
    cout << b << endl;
    char c = 0x41;
    cout << c << endl;
    char d = 65.5;
    cout << d << endl;
    float f = 123.56;
    cout << f << endl;
    float g = 123e2;
    cout << g << endl;
    float h = 123e-2;
    cout << h << endl;
    string i = "Hello";
    cout << i << endl;

    //different ways of assignment
    int j = 10;
    cout << j << endl;
    int k = 010;
    cout << k << endl;
    int l = 0x10;
    cout << l << endl;
    int m(10);
    cout << m << endl;
    int n = (10);
    cout << n << endl;
    int o{10};
    cout << o << endl;
    int p = {10};
    cout << p << endl;
    return 0;
}