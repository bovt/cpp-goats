//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://cwe.mitre.org/data/definitions/457.html
//

#include <iostream>

int main(int argc, char const *argv[]) {

    // example 1
    int i = 1;
    int err_val = 1;
    char *test_string;
    if (i != err_val)
    {
        test_string = "Hello World!";
    }
    printf("%s", test_string);

    // example 2
    int aN, bN, ctl;
    const int NEXT_SZ = 1;
    switch (ctl) {
        case -1:
            aN = 0;
            bN = 0;
            break;

        case 0:
            aN = i;
            bN = -i;
            break;

        case 1:
            aN = i + NEXT_SZ;
            bN = i - NEXT_SZ;
            break;

        default:
            aN = -1;
            aN = -1;
            break;
    }
    std::cout << aN << bN;
}
