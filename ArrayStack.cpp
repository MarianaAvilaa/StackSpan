//
// Created by StudentLoaner on 11/6/2022.
//

#include "ArrayStack.h"

#include <iostream>
using namespace std;
template <typename E>
ArrayStack<E>::ArrayStack(int cap) {
    capacity=cap;
    s= new E[capacity];
}

template <typename E>
int ArrayStack<E>::size() const {
    return t+1;
}

template <typename E>
bool ArrayStack<E>::empty() const {
    if(t<0){
        return 1;
    }
    else{
        return 0;
    }
}
template<typename E>
const E &ArrayStack<E>::top() const throw(StackEmpty) {
    if(empty()==1){
        throw StackEmpty();

    }
    return s[t];

}

template<typename E>
void ArrayStack<E>::push(const E &e) throw(StackFull) {
if (size()>capacity){
    throw StackFull();

}
else{
  t=t+1;
  s[t]=e;
}
}
template<typename E>
void ArrayStack<E>::pop() throw(StackEmpty){
    if(empty()==1){
        throw StackEmpty("Stakc Empty");
    }
    else{
        t=t-1;
    }
}




