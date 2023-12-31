#include <stdio.h>

/* print the frequency of characters in it's input,
    press control-D to show output*/

int main()
{
    int frequency[26];
    int c;

    for(int i = 0;i<26;i++)
        frequency[i] = 0;

    while((c = getchar()) != EOF)
    {
        frequency[c - 'a']++;
    } 

    for(int i = 0;i < 26;i++)
    {
        printf("%c: " , i + 'a');
        for (int  j = 0; j < frequency[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}