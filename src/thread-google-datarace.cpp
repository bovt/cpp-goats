//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://github.com/google/sanitizers/wiki/ThreadSanitizerCppManual
//

#include <iostream>
#include <stdio.h>
#include <pthread.h>

int Global;

void *Thread1(void *x) {
    Global++;
    return NULL;
}

void *Thread2(void *x) {
    Global--;
    return NULL;
}

int main() {
    pthread_t t[2];
    pthread_create(&t[0], NULL, Thread1, NULL);
    pthread_create(&t[1], NULL, Thread2, NULL);
    pthread_join(t[0], NULL);
    pthread_join(t[1], NULL);
}
