#include <iostream>

using namespace std;

int main() {

    int i1 = 0;
    while (i1 <= 10)
    {
        i1++;
        if (i1 == 5)
        {
            continue;
            // break;
        }
        cout << i1 << endl;
    }

    // int i2 = 0;
    // while (i2 <= 10)
    // {
    //     i2++;
    //     while (i2 == 5)
    //     {
    //         break;
    //     }
    //     cout << i2 << endl;
    // }
    
    
    cout << "akhirnya" << endl;
    cin.get();
    return 0;
}