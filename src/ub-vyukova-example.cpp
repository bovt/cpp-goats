//
// Created by BVT.MI on 31.12.2022.
// Based on sources from https://sciencejournals.ru/view-article/?j=program&y=2020&v=0&n=4&a=Program2001008Vyukova
// (Средства динамического анализа программ в компиляторах GCC И CLANG Н. И. Вьюкова, В. А. Галатенко, С. В. Самборский)
//

#include <iostream>
#include <stdio.h>
#include <pthread.h>

int ops [13] = {11, 12, 46, 3, 2, 2, 3, 2, 1, 3, 2, 1, 2};
int num = 13;
int main()
{
    int i;
    for (i = 0; i < num; i++)
    {
        int j;
        for (j = num - 1; j >= i; j--)
        {
            if (ops[j-1] < ops[j])
            {
                int op = ops[j];
                ops[j] = ops[j-1];
                ops[j-1] = op;
            }
        }
    }
    return 0;
}
