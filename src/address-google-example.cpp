//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://github.com/google/sanitizers/wiki/AddressSanitizerLeakSanitizer
//

#include <iostream>
#include <stdio.h>
#include <pthread.h>

void *p;

int main() {
    p = malloc(7);
    p = 0; // The memory is leaked here.
    return 0;
}

int main() {

    return 0;
}
