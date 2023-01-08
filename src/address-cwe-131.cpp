//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/131.html
//
// Use following during run xSan's instrumentalized programs:
// First argument: &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

#include <cstring>
#include <cstdlib>

char *copy_input(const char *user_supplied_string) {
    int i, dst_index;
    char *dst_buf = (char *) malloc(4 * sizeof(char) * 32);
    if (32 <= strlen(user_supplied_string)) {
        return nullptr;
    }
    dst_index = 0;
    for (i = 0; i < strlen(user_supplied_string); i++) {
        if ('&' == user_supplied_string[i]) {
            dst_buf[dst_index++] = '&';
            dst_buf[dst_index++] = 'a';
            dst_buf[dst_index++] = 'm';
            dst_buf[dst_index++] = 'p';
            dst_buf[dst_index++] = ';';
        } else if ('<' == user_supplied_string[i]) {

/* encode to &lt; */
        } else dst_buf[dst_index++] = user_supplied_string[i];
    }
    return dst_buf;
}

int main(int argc, char const *argv[]) {
    copy_input(argv[1]);
    return 0;
}

