#include <stdio.h>
#include <limits.h>

int main(void)
{
    char c;
    short sh;
    int i;
    long l;
    signed char sc;
    unsigned char uc;
    signed int si;
    unsigned int ui;
    signed long sl;
    unsigned long ul;

    printf("char miniumu: %d\n", CHAR_MIN);
    printf("char maximum: %d\n", CHAR_MAX);

    printf("int minimum: %d\n", INT_MIN);
    printf("int maximum: %d\n", INT_MAX);

    printf("long minimum: %ld\n", LONG_MIN);
    printf("long maximum: %ld\n", LONG_MAX);

    return 0;
}