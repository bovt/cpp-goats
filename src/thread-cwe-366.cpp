//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://cwe.mitre.org/data/definitions/366.html
//

#include <iostream>
#include <stdio.h>
#include <thread>

int foo = 0;

const auto worker = [](int num) {
    static int counter = 0;
    counter++;
    if (num > foo) foo = num;
    return;
};

int main(int argc, char const *argv[]) {
    std::thread thread1(worker, 1);
    std::thread thread2(worker, 2);
    printf ("%n", foo);
    return 0;
}