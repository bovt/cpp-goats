//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/478.html
//


#include <iostream>
#include <stdio.h>

#define FAILED 0
#define PASSED 1

int main(int argc, char const *argv[]) {
    int result = -1;
    if (argc > 1) result = std::atoi (argv[1]) ;
    switch (result) {
        case FAILED:
            printf("Security check failed!\n");
            exit(-1);
            break;

        case PASSED:
            printf("Security check passed.\n");
            break;
    }
    printf("program execution continues....\n");
}
