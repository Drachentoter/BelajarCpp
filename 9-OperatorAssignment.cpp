#include <iostream>

using namespace std;

int main() {
    int a = 10;
    cout << "nilai awal a adalah = " << a << endl;

    // operator assigment
    a += 9;
    cout << "a ditambahkan 9 = " << a << endl; 
    a -= 9;
    cout << "a dikurangkan 9 = " << a << endl;
    a /= 9;
    cout << "a dibagikan  9 = " << a << endl;
    a *= 9;
    cout << "a dikalikan 9 = " << a << endl;
    a %= 9;
    cout << "a dimoduluskan 9 = " << a << endl;

    cin.get();
    return 0;
}