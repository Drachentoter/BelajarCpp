#include <iostream>

using namespace std;

int main() {

    int a = 6;
    int b = 9;

    bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

    // komparasi atau relation expression

    // sama dengan
    hasil1 = a == b;
    cout << a << " sama dengan " << b << " = " << hasil1 << endl;
    // tidak sama dengan
    hasil2 = a != b;
    cout << a << " tidak sama dengan " << b << " = " << hasil2 << endl;

    // lebih dari
    hasil3 = a > b;
    cout << a << " lebih dari " << b << " = " << hasil3 << endl;
    // kurang dari
    hasil4 = a < b;
    cout << a << " kurang dari" << b << " = " << hasil4 << endl;

    // lebih dari sama dengan
    hasil5 = a >= b;
    cout << a << " lebih dari sama dengan " << b << " = " << hasil5 << endl;
    // kurang dari sama dengan 
    hasil6 = a >= b;
    cout << a << " kurang dari sama dengan " << b << " = " << hasil6 << endl;

    cin.get();
    return 0;
}