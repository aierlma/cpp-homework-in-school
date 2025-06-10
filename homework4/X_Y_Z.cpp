#include <iostream>
#include "X_Y_Z.h"

int main() {
    X x;
    Y y;
    Z z;

    y.g(&x); // 对X的成员i加1
    z.f(&x); // 对X的成员i加5
    h(&x); // 对X的成员i加10

    std::cout << "i = " << x.getI() << std::endl;

    return 0;
}
