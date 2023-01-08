//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/244.html
//


#include <stdio.h>
#include <malloc.h>
#include <string.h>

int foo = 0;
char *get_secret() {
    char *secret_buffer = malloc(1024);
    strcpy (secret_buffer, "secret");
    return secret_buffer;
}

int main(int argc, char const *argv[]) {

    char *cleartext_buffer = get_secret();

    cleartext_buffer = realloc(cleartext_buffer, 1024);

    printf (cleartext_buffer);
}


