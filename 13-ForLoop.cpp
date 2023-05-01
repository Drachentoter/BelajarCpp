#include <iostream>

using namespace std;

int main()
{
    cout << "\nloop 1 \n";
    for (int i1 = 0; i1 <= 10; i1++)
    {
        cout << i1 << endl;
    }

    cout << "\nloop 2 \n";
    for (int i2 = 0; i2 <= 10; i2 += 2)
    {
        cout << i2 << endl;
    }
    
    cout << "\nloop 3 \n";
    for (int i3 = 0; i3 >= -10; i3--)
    {
        cout << i3 << endl;
    }
    
    cout << "\nloop 4 \n";
    int total = 1;
    for (int i4 = 1; i4 < 10; i4++, total += i4)
    {
        cout << i4 << " || " << total << endl;
    }
    

    cin.get();
    return 0; 
}