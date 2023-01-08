//
// Created by BVT.MI on 03.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/120.html
//
// Use following during run xSan's instrumentalized programs:
// First argument: VeryVeryVeryVeryLongString
// Input data 1st VeryLongLastNameMoreThanTwenty


#include <cstdio>
#include <cstring>
#include <unistd.h>

const int STR_MAX = 23;

//    Example 2
void manipulate_string(const char * string){
    char buf[24];
    strcpy(buf, string);
}


int main(int argc, char const *argv[]) {

//    Example 1
    char last_name[20];
    printf ("Enter your last name:");
    scanf ("%s", last_name);


//    Example 2
    manipulate_string (argv[1]);

    return 0;
}