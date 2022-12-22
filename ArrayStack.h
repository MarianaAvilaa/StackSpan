//
// Created by StudentLoaner on 11/6/2022.
//

#ifndef STACKSPAN_ARRAYSTACK_H
#define STACKSPAN_ARRAYSTACK_H
#include <iostream>
#include "StackEmpty.h"
#include "StackFull.h"
#include "RuntimeException.h"
using namespace std;
template <typename E>
class ArrayStack {
enum{
    DEF_CAPACITY=100
};
public:
    ArrayStack(int cap= DEF_CAPACITY);
    int size() const;
    bool empty() const;
    const E& top() const throw(StackEmpty);
    void push(const E&e) throw(StackFull) ;
    void pop() throw(StackEmpty);


private:
    E* s;  //member data/ array of stack elements
    int capacity;
    int t; //index on top of the stack
};


#endif //STACKSPAN_ARRAYSTACK_H
