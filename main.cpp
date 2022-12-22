#include <iostream>
#include "ArrayStack.h"
#include "ArrayStack.cpp"
using namespace std;

void calculateSpan(int price[], int days){
    // creating a stack and push index of first element
    ArrayStack<int> st;
    st.push(0);
    int span[days];// new array of n intergers
    span[0]=1; //span value of first element is 1
    // calculate span days
    for(int i=1; i<days; i++){
     //pop elements from stack while stack is not empty
     // and top of stack is smaller than price[i]
        while (!st.empty() && price[st.top()]<=price[i]){
            st.pop();
        }
     // if stack empty, then price[i] < than all elem
     //on left of it, i.e price[0].. price[i-1]
        if(st.empty()==1){
            span[i]=i+1;
        }else{
            span[i]=i-st.top();
            st.push(i);
        }
    }
    for(int i=0;i<days;i++){
        cout<<span[i]<<",";
    }
}

int main() {
    int pricestock[6]={31,27,14,21,30,22};

    calculateSpan(pricestock,6);

    return 0;
}
