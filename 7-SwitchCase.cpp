#include <iostream>

using namespace std;

int main () {
    int a;
    cout << "masukan angka: \n";
    cin >> a;

    switch (a)
    {
    case 3:
        cout << "a = 3" << endl;
        break;
    case 6:
        cout << "a = 6" << endl;
        break;
    case 9:
        cout << "a = 9" << endl;
        break;
    default:
    cout << "hasilnya bukan 3,6 atau 9 tapi default" << endl;
        break;
    }

    cin.get();
    return 0;
}