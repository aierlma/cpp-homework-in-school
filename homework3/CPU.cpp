#include<iostream>

class CPU {
public:
    unsigned int clockSpeed : 12; // 最大表示到4095MHz，足够表示到3000MHz
    unsigned int wordSize : 1; // 0表示32位，1表示64位
    unsigned int coreCount : 2; // 00表示单核，01表示双核，10表示四核
    unsigned int hyperThreading : 1; // 0表示不支持超线程，1表示支持超线程

    CPU(unsigned int clockSpeed, unsigned int wordSize, unsigned int coreCount, unsigned int hyperThreading) {
        this->clockSpeed = clockSpeed;
        this->wordSize = wordSize;
        this->coreCount = coreCount;
        this->hyperThreading = hyperThreading;
    }
};

int main() {
    CPU cpu(3000, 1, 2, 1);
    std::cout << "Size of CPU class: " << sizeof(cpu) << " bytes" << std::endl;
    return 0;
}
