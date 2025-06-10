
#ifndef HOMEWORK4_X_Y_Z_H
#define HOMEWORK4_X_Y_Z_H


class X; // 前向声明

class Y {
public:
    void g(X* x); // 声明友元函数
};

class Z {
public:
    void f(X* x); // 声明友元函数
};

class X {
private:
    int i;
    friend void Y::g(X* x); // Y的成员函数g是X的友元函数
    friend class Z; // Z是X的友元类
    friend void h(X* x); // h是X的友元函数
public:
    X() {
        i = 0;
    }
    int getI() {
        return i;
    }
};

void Y::g(X* x) {
    x->i += 1;
}

void Z::f(X* x) {
    x->i += 5;
}

void h(X* x) {
    x->i += 10;
}



#endif //HOMEWORK4_X_Y_Z_H
