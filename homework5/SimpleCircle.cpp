#include <iostream>
#include <cmath>

class SimpleCircle {
private:
    int * itsRadius;

public:
    // 构造函数
    SimpleCircle(int radius) {
        itsRadius = new int(radius);
    }

    // 析构函数
    ~SimpleCircle() {
        delete itsRadius;
    }

    // 获取半径
    int getRadius() const {
        return *itsRadius;
    }

    // 设置半径
    void setRadius(int radius) {
        *itsRadius = radius;
    }

    // 计算面积
    double getArea() const {
        return M_PI * (*itsRadius) * (*itsRadius);
    }
};

int main() {
    SimpleCircle circle(5);
    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Area: " << circle.getArea() << std::endl;

    circle.setRadius(10);
    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Area: " << circle.getArea() << std::endl;

    return 0;
}
