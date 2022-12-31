//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://cwe.mitre.org/data/definitions/129.html
//

#include <iostream>
#include <stdio.h>
#include <pthread.h>

int getValueFromArray(int *array, int len, int index) {

    int value;

// check that the array index is less than the maximum

// length of the array
    if (index < len) {
// get the value at the specified index of the array
        value = array[index];
    }
// if array index is invalid then output error message

// and return value indicating error
    else {
        printf("Value is: %d\n", array[index]);
        value = -1;
    }

    return value;
}

int main() {

    return 0;
}
