//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/415.html
//

#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <cstring>

#define BUFSIZE1 512
#define BUFSIZE2 ((BUFSIZE1/2) - 8)

int main(int argc, char **argv) {

    // example 1
    char* ptr = (char*)malloc (BUFSIZE1);
    printf ("1.First. ");
    if (argc == 1) {
        free(ptr);
    }
    printf ("1.Second. ");
    free(ptr);

    // example 2
    char *buf1R1;
    char *buf2R1;
    char *buf1R2;
    buf1R1 = (char *) malloc(BUFSIZE2);
    buf2R1 = (char *) malloc(BUFSIZE2);

    printf ("2.First. ");
    free(buf1R1);
    free(buf2R1);
    buf1R2 = (char *) malloc(BUFSIZE1);
    strncpy(buf1R2, argv[0], BUFSIZE1-1);
    printf ("2.Second. ");
    free(buf2R1);
    free(buf1R2);
}