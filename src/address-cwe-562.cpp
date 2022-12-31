//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://cwe.mitre.org/data/definitions/562.html
//

#include <iostream>
#include <stdio.h>
#include <pthread.h>

const int STR_MAX = 23;

void fillInName(char *name) {
    return;
}


char* getName() {
    char name[STR_MAX];
    fillInName(name);
    return name;
}
int main() {

    return 0;
}
