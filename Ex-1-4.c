#include <stdio.h>

main()
{
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 150;
	step = 10;

	celsius = lower;
	while(celsius <= upper)
	{
		fahr = ((9.0 * celsius) / 5.0) + 32.0;
		printf("%5.0f %10.1f \n", celsius, fahr);
		celsius += step;
	}
}
