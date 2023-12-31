#include <stdio.h>

float fahr_to_celsius(int fahr);

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    while(fahr <= upper)
    {
        printf("%3.0d %6.1f\n", fahr, fahr_to_celsius(fahr));
        fahr += step;
    }
}

float fahr_to_celsius(int fahr)
{
    return (5.0/9.0) * (fahr-32.0);
}