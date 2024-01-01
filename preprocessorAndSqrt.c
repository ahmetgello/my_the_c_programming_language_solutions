#include "stdio.h" 
#include "math.h"
int main(void)
{
    int n = 4;
    printf("%lf\n", sqrt(n)); 
    printf("TIME %s\n", __TIME__);
#line 2024
    printf("LINE %d\n", __LINE__);
    printf("FILE %s\n", __FILE__);
    printf("DATE %s\n", __DATE__);
    return 0;
}