#include <iostream>
#include <limits>

using namespace std;

int main() 
{
    // 1 byte mempunyai 8 bit
    // Bilangan bulat
    int Bulat1 = 1; // int mempunyai besar 4-byte atau 32-bit
    cout << "int min: " << numeric_limits<int>::min() << endl;
    cout << "int max: " << numeric_limits<int>::max() << endl;
    cout << "unsigned int min: " << numeric_limits<unsigned int>::min() << endl;
    cout << "unsigned int max: " << numeric_limits<unsigned int>::max() << endl;
    short Bulat2 = 1; // short mempunyai besar 2-byte atau 16-bit
    cout << "short min: " << numeric_limits<short>::min() << endl;
    cout << "short max: " << numeric_limits<short>::max() << endl;
    cout << "unsigned short max: " << numeric_limits<unsigned short>::max() << endl;
    long Bulat3 = 1; // long mempunyai besar 8-byte atau 64-bit
    cout << "long min: " << numeric_limits<long long>::min() << endl;
    cout << "long max: " << numeric_limits<long long>::max() << endl;
    cout << "unsigned long: " << numeric_limits<unsigned long long>::max() << endl;

    // Bilangan decimal
    float decimal1 = 1; // float mempunyai besar 4-byte atau 32-bit
    cout << "float min: " << numeric_limits<float>::min() << endl;
    cout << "float max: " << numeric_limits<float>::max() << endl;
    double decimal2 = 1; // double mempunyai besar 8-byte atau 64-bit
    cout << "double min: " << numeric_limits<double>::min() << endl;
    cout << "double max: " << numeric_limits<double>::max() << endl;

    // character
    char character1 = 'a'; // satu character 1-bit
    cout << "char min: " << int(numeric_limits<char>::min()) << endl;
    cout << "char max: " << int(numeric_limits<char>::max()) << endl;
    cout << "unsigned char min: " << int(numeric_limits<unsigned char>::min()) << endl;
    cout << "unsigned char max: " << int(numeric_limits<unsigned char>::max()) << endl;

    // Boolean
    bool boolean1 = true; // true or false
    cout << "boolean min: " << numeric_limits<bool>::min() << endl;
    cout << "boolean max: " << numeric_limits<bool>::max() << endl;

    // size_t
    cout << "size_t min: " << numeric_limits<size_t>::min() << endl;
    cout << "size_t max: " << numeric_limits<size_t>::max() << endl;

    cout << decimal1 << endl;
    cout << sizeof(decimal1) << "-byte" << endl;

    cin.get();
    return 0;
}