#include <stdio.h>
#define MINIMUM 80

/* this program prints lines longer than MINIMUM */

int getline1(char s[], int lim);

int main()
{
    char line[__INT16_MAX__];

    while(1)
    {
        if(getline1(line, __INT16_MAX__) > MINIMUM)
            printf("%s\n", line);
    }
    return 0;
}

int getline1(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        s[i] = c;
    }
    if(s[i] == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
