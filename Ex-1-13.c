#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, state, charCount, prevChar;

    state = OUT;
    charCount = 0;

    while((c = getchar()) != EOF)    
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
            for (int i = 0; i < charCount; i++)
            {
                printf("#");
            }
            charCount = 0;
            if(prevChar != ' ' && prevChar != '\t')
                printf("\n");
        }
        else
        {
            state = IN;
            charCount++; 
        }
        prevChar = c;
    }

}