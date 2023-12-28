#include <stdio.h>

main()
{
	int blanks, tabs, new_lines;

	blanks = tabs = new_lines = 0;

	int c;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
			blanks++;
		else if(c == '\t')
			tabs++;
		else if(c == '\n')
			new_lines++;
	}
	printf("Blanks: %3d\n", blanks);
	printf("Tabs: %3d\n", tabs);
	printf("New Lines: %3d\n", new_lines);
}

