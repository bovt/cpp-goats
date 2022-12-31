//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://wiki.sei.cmu.edu/confluence/display/cplusplus/OOP50-CPP.+Do+not+invoke+virtual+functions+from+constructors+or+destructors
//

#include <iostream>
#include <stdio.h>
#include <pthread.h>


struct B {
    B() { seize(); }
    virtual ~B() { release(); }

protected:
    virtual void seize();
    virtual void release();
};

struct D : B {
    virtual ~D() = default;

protected:
    void seize() override {
        B::seize();
        // Get derived resources...
    }

    void release() override {
        // Release derived resources...
        B::release();
    }
};


int main()
{
    B b;
    D d;

    return 0;
}