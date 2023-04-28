#include <iostream>

using namespace std;

int main()
{
    // increment and decrement
    int a = 6;
    int b = 6;
    int c = 6;
    int d = 6;

    // post increment
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl << endl;

    // pre increment
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl << endl;

    // post decrement
    cout << c << endl;
    cout << c-- << endl;
    cout << c << endl << endl;

    // pre decrement
    cout << d << endl;
    cout << --d << endl;
    cout << d << endl << endl;

    cin.get();
    return 0;
}