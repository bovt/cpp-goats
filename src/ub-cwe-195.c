//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/195.html
//
// Use following during run xSan's instrumentalized programs:
// First argument: 16

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 16

char *processNext(char *strm) {
    char buf[MAX_SIZE];
    short len = *(short *) strm;
    strm += sizeof(len);
    if (len <= MAX_SIZE) {
        memcpy(buf, strm, len);
        printf("processNext done");
        return strm + len;
    } else {
        printf("processNext failed");
        return -1;
    }
}

int main(int argc, char const *argv[]) {
    if (argc > 1)
    {
        short i = (short) atoi(argv[1]);
        char buf[i];
        *(short *) buf = i;
        processNext(buf);
    }
    return 0;
}

