#include <iostream>
#include "devide.h"

int main() {
    using namespace std;
    unsigned short a, b;

    // Test case 1
    a = 10;
    b = 2;
    short results = devide(a, b);
    if (results == 5)
        cout << "Test case 1 passed" << endl;
    else
        cout << "Test case 1 failed" << endl;

    // Test case 2
    a = 5;
    b = 0;
    results = devide(a, b);
    if (results == -1)
        cout << "Test case 2 passed" << endl;
    else
        cout << "Test case 2 failed" << endl;

    // Test case 3
    a = 65535;
    b = 65535;
    results = devide(a, b);
    if (results == 1)
        cout << "Test case 3 passed" << endl;
    else
        cout << "Test case 3 failed" << endl;

    // Test case 4
    a = 0;
    b = 10;
    results = devide(a, b);
    if (results == 0)
        cout << "Test case 4 passed" << endl;
    else
        cout << "Test case 4 failed" << endl;

    // Test case 5
    a = 32767;
    b = 2;
    results = devide(a, b);
    if (results == 16383)
        cout << "Test case 5 passed" << endl;
    else
        cout << "Test case 5 failed" << endl;

    return 0;
}

