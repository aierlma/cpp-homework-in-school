#include <iostream>
#include "devide.h"
int main()
{
    using namespace std;
    unsigned short a, b;
    cout << "Enter two positive integers: ";
    cin >> a >> b;
    short int devide(unsigned short, unsigned short);
    short results = devide(a, b);
    // if results is -1, then the devide is not possible
    if (results == -1)
        cout << "The devide of " << a << " and " << b << " is not possible" << endl;
    else
        cout << "The devide of " << a << " and " << b << " is " << results << endl;

}