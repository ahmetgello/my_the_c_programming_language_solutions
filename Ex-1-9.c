#include <stdio.h>

main()
{
	int c, prev_char;

	while((c = getchar()) != EOF)
	{
		if(c == prev_char && c == ' ')
			continue;
		else
			putchar(c);
		prev_char = c;
	}
}
