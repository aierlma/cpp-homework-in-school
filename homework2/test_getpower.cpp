#include <iostream>
#include <cmath>
#include "getpower.h"
using namespace std;

int main() {
    // Test integer power function
    int x1 = 2;
    int y1 = 3;
    int result1 = getpower(x1, y1);
    int expected1 = pow(x1, y1);
    if (result1 == expected1) {
        cout << "Test case 1 for integer power function passed." << endl;
    }
    else {
        cout << "Test case 1 for integer power function failed." << endl;
    }

    // Test double power function
    double x2 = 2.0;
    int y2 = 3;
    double result2 = getpower(x2, y2);
    double expected2 = pow(x2, y2);
    if (result2 == expected2) {
        cout << "Test case 2 for double power function passed." << endl;
    }
    else {
        cout << "Test case 2 for double power function failed." << endl;
    }

    // Test negative power for integer power function
    int x3 = 2;
    int y3 = -3;
    int result3 = getpower(x3, y3);
    int expected3 = 0;
    if (result3 == expected3) {
        cout << "Test case 3 for negative power in integer power function passed." << endl;
    }
    else {
        cout << "Test case 3 for negative power in integer power function failed." << endl;
    }

    // Test negative power for double power function
    double x4 = 2.0;
    int y4 = -3;
    double result4 = getpower(x4, y4);
    double expected4 = 0;
    if (result4 == expected4) {
        cout << "Test case 4 for negative power in double power function passed." << endl;
    }
    else {
        cout << "Test case 4 for negative power in double power function failed." << endl;
    }

    // Test zero power for integer power function
    int x5 = 2;
    int y5 = 0;
    int result5 = getpower(x5, y5);
    int expected5 = 1;
    if (result5 == expected5) {
        cout << "Test case 5 for zero power in integer power function passed." << endl;
    }
    else {
        cout << "Test case 5 for zero power in integer power function failed." << endl;
    }

    // Test zero power for double power function
    double x6 = 2.0;
    int y6 = 0;
    double result6 = getpower(x6, y6);
    double expected6 = 1;
    if (result6 == expected6) {
        cout << "Test case 6 for zero power in double power function passed." << endl;
    }
    else {
        cout << "Test case 6 for zero power in double power function failed." << endl;
    }

    return 0;
}
