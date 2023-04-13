#include <iostream>

using namespace std;

int main() {
    int a = 3;
    int b = 9;

    bool hasil;

    // not, akan true jika si bilangan bool yang asli adalah false dan jika bilangan bool asli true si not akan false
    cout << "not \n";
    hasil = !(a == 3);
    cout << hasil << endl;

    // and, akan true jika kedua bilangan nya true semua dan jika ada salah satu yang false si and akan false
    cout << "and \n";
    hasil = (a == 3) and (b == 9); // keduanya true
    cout << hasil << endl;
    hasil = (a == 1) and (b == 9); // yang a false
    cout << hasil << endl;
    hasil = (a == 3) and (b == 3); // yang b false
    cout << hasil << endl;
    hasil = (a == 1) and (b == 1); // keduanya false
    cout << hasil << endl;

    // or, or akan true jika salah satu dari variabel yang ada didalamnya true
    cout << "or \n";
    hasil = (a == 3) or (b == 9); // keduanya true
    cout << hasil << endl;
    hasil = (a == 1) or (b == 9); // yang a false
    cout << hasil << endl;
    hasil = (a == 3) or (b == 1); // yang b false
    cout << hasil << endl;
    hasil = (a == 1) or (b == 1); // keduanya false
    cout << hasil << endl;

    cin.get();
    return 0;
}