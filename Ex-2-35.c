#include <stdio.h>

void squeeze(char s[], char c);

int main()
{
	char mystring[11] = "Ahmet Gello";
	char ch = 'h';

	squeeze(mystring, ch);
	
	printf("%s\n", mystring);/* must printf "Aet Geo" */	
	return 0;
}

void squeeze(char s[], char c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0';i++)
		if(s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}
