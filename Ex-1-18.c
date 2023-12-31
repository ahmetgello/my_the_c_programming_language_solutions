#include <stdio.h>

/* This program prints lines after removing preceeding blanks and tabs */

int getline1(char s[], int lim);

int main()
{

    while(1)
    {
        int blanks = 0;
        char cleanline[__INT16_MAX__] = {0};
        char line[__INT16_MAX__] = {0};

        getline1(line, __INT16_MAX__);
        
        while(line[blanks] == ' ' || line[blanks] == '\t')
            ++blanks;

        for (int i = 0; line[i+blanks] != '\0'; i++)
        {
            cleanline[i] = line[i+blanks];             
        }
        if(line[0] != '\0') /* don't print anything if line is empty */
            printf("%s\n", cleanline); 
        
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