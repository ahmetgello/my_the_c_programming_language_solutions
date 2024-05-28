#include <stdio.h>

int main()
{
	short x = 1; /* 00000001 */

	printf("X: %d\n", x);

	x = ~x; /* 11111110 */

	printf("~X: %d\n", x);

	printf("%d\n", sizeof(x));
	return 0;
}
