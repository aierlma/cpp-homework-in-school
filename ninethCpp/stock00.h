//
// Created by aierlma on 2023/5/31.
//

#ifndef NINETHCPP_STOCK00_H
#define NINETHCPP_STOCK00_H

#include <string>

class Stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();

};
#endif //NINETHCPP_STOCK00_H
