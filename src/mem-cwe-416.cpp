//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/416.html
//

#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <cstring>

#define BUFSIZER1 512
#define BUFSIZER2 ((BUFSIZER1/2) - 8)
int main(int argc, char **argv) {

    // example 1
    char *buf1R1;
    char *buf2R1;
    char *buf2R2;
    char *buf3R2;
    buf1R1 = (char *) malloc(BUFSIZER1);
    buf2R1 = (char *) malloc(BUFSIZER1);
    free(buf2R1);
    buf2R2 = (char *) malloc(BUFSIZER2);
    buf3R2 = (char *) malloc(BUFSIZER2);
 //   strncpy(buf2R1, argv[1], BUFSIZER1-1);
    free(buf1R1);
    free(buf2R2);
    free(buf3R2);

    // example 2
    char* ptr = (char*)malloc (BUFSIZER1);
    if (argc == 1) {
        free(ptr);
    }

    printf("trying to use after free");
    if (argc == 1) {
        printf ("operation aborted before commit, %s", ptr);
    }

}
