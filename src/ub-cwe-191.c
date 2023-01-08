//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/191.html
//

#include <stdio.h>
#include <stdbool.h>
main (void)
{
    // example 1
    int i;
    i = -2147483648;
    i = i - 1;

    // example 2
    int a = 5, b = 6;
    size_t len = a - b;
    char buf[len]; // Just blows up the stack

    return 0;
}