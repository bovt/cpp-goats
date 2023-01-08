//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/126.html
//
// Use following during run xSan's instrumentalized programs:
// First argument: 1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef
// Second argument: 1234567890abcdef1234567890abcdef


#include <cstring>
#include <cstdio>

int main(int argc, char **argv)
{
    char Filename[256];
    char Pattern[32];

/* copy filename parameter to variable, may cause off-by-one overflow */
    strncpy(Filename, argv[1], sizeof(Filename));

/* copy pattern parameter to variable, may cause off-by-one overflow */
    strncpy(Pattern, argv[2], sizeof(Pattern));

    printf("Searching file: %s for the pattern: %s\n", Filename, Pattern);
//    Scan_File(Filename, Pattern);
}