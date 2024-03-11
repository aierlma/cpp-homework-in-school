//
// Created by aierlma on 2023/5/31.
//

#ifndef NINETHCPP_STACK_H
#define NINETHCPP_STACK_H

typedef unsigned long Item;

class Stack {
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};
#endif //NINETHCPP_STACK_H
