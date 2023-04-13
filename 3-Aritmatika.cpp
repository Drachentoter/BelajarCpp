#include <iostream>

using namespace std;

int main() {
    int a = 2;
    int b = 6;
    float c = 9;

    float hasil;
    // operator nya ada +, -, *, /, %

    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    hasil = a / c;
    cout << a << " / " << c << " = " << hasil << endl;

    hasil = a % b;
    cout << a << " % " << c << " = " << hasil << endl;

    hasil = (a + b) * c;
    cout << "(" << a << " + " << b << ")" << " x " << c << " = " << hasil << endl;

    cin.get();
    return 0;
}