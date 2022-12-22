//
// Created by StudentLoaner on 11/10/2022.
//

#ifndef STACKSPAN_STACKEMPTY_H
#define STACKSPAN_STACKEMPTY_H

#endif //STACKSPAN_STACKEMPTY_H
using namespace std;
#include <iostream>
#include "RuntimeException.h"
class StackEmpty : public RuntimeException{
public:
    StackEmpty(const string &err ="Stack is Empty"):
    RuntimeException(err){}
};
