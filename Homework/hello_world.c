#include <stdio.h>

int main()
{
    unsigned char a;
    unsigned char b;
    unsigned char c;
    unsigned char d;
    unsigned char e;
    unsigned char f;
    unsigned char g;

    a = 0110; //H
    b = 0105; //E
    c = 0114; //L
    d = 0117; //O
    e = 0127; //W
    f = 0122; //R
    g = 0104; //D

    printf("%c%c%c%c%c %c%c%c%c%c!!\n", a, b, c, c, d, e, d, f, c, g);

    return 0;
}