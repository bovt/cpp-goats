//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://cwe.mitre.org/data/definitions/562.html
//

#include <iostream>
#include <stdio.h>
#include <pthread.h>
#include <cstring>

const int STR_MAX = 23;

char* getName() {
    char name[STR_MAX];
    name[0]='S';
    name[1]='\0';
    return name;
}
int main() {
    printf("%s", getName());
    return 0;
}
