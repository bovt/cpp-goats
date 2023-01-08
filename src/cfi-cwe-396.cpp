//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/396.html
//

#include <stdio.h>

int foo = 0;
int storenum(int num) {
    static int counter = 0;
    counter++;
    if (num > foo) {foo = num;throw (5);}
            else {throw (5);};
    return foo;
}

int main(int argc, char const *argv[]) {

    printf ("begin\n");

    try {
        storenum(1);
        storenum(2);
    }
    catch (int e) {
        printf ("doExchange failed");
    }

        return 0;
}

