#include <iostream>

class Cat {
private:
    static int numOfCats; // 静态数据成员

public:
    // 构造函数
    Cat() {
        numOfCats++;
    }

    // 静态成员函数
    static int getNumOfCats() {
        return numOfCats;
    }
};

// 初始化静态数据成员
int Cat::numOfCats = 0;

int main() {
    std::cout << "Number of cats: " << Cat::getNumOfCats() << std::endl;

    Cat cat1;
    Cat cat2;
    Cat cat3;

    std::cout << "Number of cats: " << Cat::getNumOfCats() << std::endl;

    return 0;
}

