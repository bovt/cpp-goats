//
// Created by BVT.MI on 05.01.2023.
// Based on sources from https://cwe.mitre.org/data/definitions/588.html
//

struct foo
{
    int i;
};

int main(int argc, char **argv)
{
    struct foo *f = (struct foo *)main;
    f->i = 2;
    return f->i;
};