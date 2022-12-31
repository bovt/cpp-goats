//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://wiki.sei.cmu.edu/confluence/display/cplusplus/OOP52-CPP.+Do+not+delete+a+polymorphic+object+without+a+virtual+destructor
//

#include <iostream>
#include <stdio.h>
#include <pthread.h>

struct Base {
    virtual void f();
};

struct Derived : Base {};

void f() {
    Base *b = new Derived();
    std::cout << "function f";
    delete b;
}

int main()
{
    f();
    return 0;
}