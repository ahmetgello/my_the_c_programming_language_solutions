#include <stdio.h>
#define TAB 8
int main()
{
    int c, col, spaces;
    col = 0;
    while((c = getchar()) != EOF)
    {
        if(c == '\t')
        {
            spaces = TAB - col % TAB;
            for (int i = 0; i < spaces; i++)
            {
                putchar('b');
            } 
            col += spaces;
        }
        else
        {
            putchar(c);
            ++col;
            if(col == '\n')
                col = 0;
        } 
    }
    return 0;
}