#include <stdio.h>

/* this program prints the longest line */

int getline1(char s[], int lim);
void copy(char to[], char from[]); 

int main()
{
    int len;
    int max;
    char line[__INT16_MAX__];
    char longest[__INT16_MAX__];

    max = 0;
    while((len = getline1(line, __INT16_MAX__)) > 0)
    {
        if(len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0)
        printf("%s", longest);
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

void copy(char to[], char from[])
{
    int i = 0;

    while((to[i] = from[i]) != '\0')
        ++i;
}