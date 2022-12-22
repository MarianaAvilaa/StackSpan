//
// Created by StudentLoaner on 11/10/2022.
//

#ifndef STACKSPAN_STACKFULL_H
#define STACKSPAN_STACKFULL_H

#endif //STACKSPAN_STACKFULL_H
using namespace std;
#include <iostream>
#include "RuntimeException.h"
class StackFull: public RuntimeException{
public:
    StackFull(const string& err= "Stack is Full"):
            RuntimeException(err){}
};