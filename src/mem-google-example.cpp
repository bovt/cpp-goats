//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://github.com/google/sanitizers/wiki/MemorySanitizer
//

#include <iostream>
#include <stdio.h>

int x[1] = {9};

int main(int argc, char const *argv[]) {

        int* a = new int[10];
        a[5] = 0;
        if (a[argc])
            printf("xx\n");
        return 0;
}
