//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://wiki.sei.cmu.edu/confluence/display/cplusplus/OOP55-CPP.+Do+not+use+pointer-to-member+operators+to+access+nonexistent+members
//

#include <iostream>
#include <stdio.h>
#include <pthread.h>

struct B {
    virtual ~B() = default;
};

struct D : B {
    virtual ~D() = default;
    virtual void g() { /* ... */ }
};

void f() {
    B *b = new B;

    // ...

    void (B::*gptr)() = static_cast<void(B::*)()>(&D::g);
    (b->*gptr)();
    delete b;
}

#include <stdio.h>
#include <string.h>
#define AUTHMAX 4

struct auth {
    char pass[AUTHMAX];
    void (*func)(struct auth*);
};


int main()
{
    f();
    return 0;
}