//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/806.html
//


#include <iostream>
#include <stdio.h>
#include <cstring>


int main(int argc, char const *argv[]) {
    char source[21] = "the character string";
    char dest[12];
    strncpy(dest, source, sizeof(source)-1);
}

