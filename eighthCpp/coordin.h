//
// Created by Ivan on 2023/5/31.
//

#ifndef EIGHTHCPP_COORDIN_H
#define EIGHTHCPP_COORDIN_H

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif //EIGHTHCPP_COORDIN_H
