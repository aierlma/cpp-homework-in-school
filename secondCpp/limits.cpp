#include <iostream>
#include <climits>
int main()
{
    using namespace std;
    int n_int = INT_MAX;      // initialize n_int to max int value
    short n_short = SHRT_MAX; // symbols defined in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof(int) << " bytes." << endl;          // int is 4 bytes. 32 bits
    cout << "short is " << sizeof n_short << " bytes." << endl;     // short is 2 bytes. 16 bits
    cout << "long is " << sizeof n_long << " bytes." << endl;       //    long is 4 bytes. 32 bits
    cout << "long long is " << sizeof n_llong << " bytes." << endl; // long long is 8 bytes. 64 bits
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl
         << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}