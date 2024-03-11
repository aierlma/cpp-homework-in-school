//
// Created by aierlma on 2023/5/31.
//

#ifndef TENTHCPP_STONEWT_H
#define TENTHCPP_STONEWT_H
class Stonewt {
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
};
#endif //TENTHCPP_STONEWT_H
