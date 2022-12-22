//
// Created by StudentLoaner on 11/10/2022.
//

#ifndef STACKSPAN_RUNTIMEEXCEPTION_H
#define STACKSPAN_RUNTIMEEXCEPTION_H


using namespace std;
#include <iostream>
class RuntimeException {
private:
    string errorMsg;
public:
    RuntimeException(const string& err) {
        errorMsg = err; }
    string getMessage() const { return errorMsg; }

};
#endif //STACKSPAN_RUNTIMEEXCEPTION_H