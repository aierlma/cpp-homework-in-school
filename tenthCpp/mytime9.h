//
// Created by aierlma on 2023/5/31.
//

#ifndef TENTHCPP_MYTIME9_H
#define TENTHCPP_MYTIME9_H

class Time {
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time Sum(const Time & t) const;
    void Show() const;
};
#endif //TENTHCPP_MYTIME9_H
