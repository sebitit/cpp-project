//
// Created by seb on 19.05.24.
//

#ifndef CPP_PROJECT_USERINPUT_H
#define CPP_PROJECT_USERINPUT_H


#include "iostream"

class UserInput {

public:
    static void printFibonacciNumber();

private:
    int input = 0;

    static void getFibonacciOrder();
    void printInputSpecificFibonacciNumber() const;
    void setInput();
};


#endif //CPP_PROJECT_USERINPUT_H
