//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://sciencejournals.ru/view-article/?j=program&y=2020&v=0&n=4&a=Program2001008Vyukova
// (Средства динамического анализа программ в компиляторах GCC И CLANG Н. И. Вьюкова, В. А. Галатенко, С. В. Самборский)
//

#include <iostream>
#include <stdio.h>

int x[1] = {9};

int main(int argc, char const *argv[]) {

        typedef int* intp;
        intp *a = new intp [10];
        a[argc] = x;
        int *b = a [2];

        printf ("*b = %d\n", *b);
        return 0;
}
