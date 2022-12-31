//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://cwe.mitre.org/data/definitions/366.html
//

#include <iostream>
#include <stdio.h>

int foo = 0;
int storenum(int num) {
    static int counter = 0;
    counter++;
    if (num > foo) foo = num;
    return foo;
}

int main(int argc, char const *argv[]) {
        storenum(1);
        storenum(2);
        return 0;
}
