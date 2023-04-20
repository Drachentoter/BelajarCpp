#include <iostream>

using namespace std;

int main () {
    int a;
    cout << "masukan angka: " << endl;
    cin >> a;

    if (a == 3) // if sama kek boolean jadi kamu bisa menambahkan sama dengan atau lebih dari dll
    {
        cout << "angkanya adalah 3" << endl;
    }
    else if (a == 6)
    {
        cout << "angka nya adalah 6" << endl;
    }
    else if (a == 9)
    {
        cout << "angkanya adalah 9" << endl;
    }
    else
    {
        cout << "angkanya bukan 3,6 ataupun 9" << endl;
    }
    

    cin.get();
    return 0;
}