#include <iostream>

using namespace std;

int main() {
    int a = 2;
    int b = 6;
    float c = 9;

    float hasil;
    // operator nya ada +, -, *, /, %

    // penambahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    // pembagian
    hasil = a / c;
    cout << a << " / " << c << " = " << hasil << endl;

    // modulus
    hasil = a % b;
    cout << a << " % " << c << " = " << hasil << endl;

    // urutan eksekusi
    hasil = (a + b) * c;
    cout << "(" << a << " + " << b << ")" << " x " << c << " = " << hasil << endl;

    cin.get();
    return 0;
}