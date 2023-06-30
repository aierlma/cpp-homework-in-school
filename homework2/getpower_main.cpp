#include <iostream>
#include "getpower.h"
int main()
{
    using namespace std;
    int x=0, y=0;
    cout << "input int x and y" << endl;
    cin >> x >> y;
    cout << "x^y=" << getpower(x, y) << endl;
    cout << "input real a and b" << endl;
    // cin get real number
    double a=0, b=0;
    cin >> a >> b;
    cout << "a^b=" << getpower(a, b) << endl;
    return 0;
}