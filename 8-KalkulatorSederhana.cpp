#include <iostream>

using namespace std;

int main() {
    float a,b,hasil;
    char aritmatika;

    cout << "masukan angka pertama: ";
    cin >> a;
    cout << "masukan +,-,*,/ ";
    cin >> aritmatika;
    cout << "masukan angka kedua: ";
    cin >> b;

    cout << "hasil perhitungan ";
    cout << a << aritmatika << b;

    if (aritmatika == '+')
    {
        hasil = a + b;
    } else if (aritmatika == '-')
    {
        hasil = a - b;
    } else if (aritmatika == '*')
    {
        hasil = a * b;
    } else if (aritmatika == '/')
    {
        hasil = a / b;
    } else
    {
        cout << "program salah"; // kalo mau si hasil gk ditunjukkin bisa pake switch case aja
    }
    
    cout << " = " << hasil << endl;

    cin.get();
    return 0;
}