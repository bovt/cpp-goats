//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/124.html
//
// Use following during run xSan's instrumentalized programs:
// First argument (just dots): ....

#include <cstring>
#include <string.h>
#include <malloc.h>
#include <iostream>

char* trimTrailingDots(const char *strMessage, int length) {
    char *retMessage;
//    char *message = malloc(sizeof(char)*(length+1));

// copy input string to a temporary string
    char message[length+1];
    int index;
    for (index = 0; index < length; index++) {
        message[index] = strMessage[index];
    }
    message[index] = '\0';

// trim trailing dots
    int len = index-1;
    while (message[len] == '.') {
        message[len] = '\0';
        len--;
    }

// return string without trailing dots
    retMessage = message;
    return retMessage;
}

int main(int argc, char const *argv[]) {
    std::cout  << trimTrailingDots (argv[1], 100);



}
