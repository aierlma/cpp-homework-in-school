#include<iostream>

class Complex {
private:
    double real; // 实部
    double imag; // 虚部

public:
    // 构造函数
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // 将一个实数添加到这个复数
    void add(double r) {
        real += r;
    }

    // 将另一个复数添加到这个复数
    void add(const Complex& c) {
        real += c.real;
        imag += c.imag;
    }

    // 显示这个复数
    void show() const {
        std::cout << real << "+" << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3, 5); // 用复数3+5i初始化c1
    Complex c2(4.5); // 用实数4.5初始化c2
    c1.add(c2); // 将c1和c2相加，结果保存在c1中
    c1.show(); // 将c1输出（这时的结果应该是7.5+5i）
    return 0;
}
