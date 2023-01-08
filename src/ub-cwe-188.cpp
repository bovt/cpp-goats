//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/188.html
//


#include <iostream>
#include <stdio.h>


int main(int argc, char const *argv[]) {
    char a;
    char b;

    a='d';
    b='r';
    std::cout << a;
    std::cout << b;

    *(&a + 1) = 0;
    std::cout << a;
    std::cout << b;
}

