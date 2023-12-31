#include <stdio.h>

void copy(char to[], char from[]);
void reverse(char s[], int length);
int getline1(char s[], int lim);

int main()
{
    
    char line[__INT16_MAX__];
    char reversed[__INT16_MAX__];

    int length = getline1(line, 1000);
    copy(reversed, line);
    reverse(reversed, length);

    printf("%s\n", reversed);
}

void reverse(char s[], int length)
{
    char temp[__INT16_MAX__];
    copy(temp, s);    
    // starting from last temp assign it to s
    for (int i = 0; i < length; i++)
    {
        s[i] = temp[length - i - 1];
    }
}

void copy(char to[], char from[])
{
    int i = 0;

    while((to[i] = from[i]) != '\0')
        ++i;
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
