#include <stdio.h>

void int_to_binary(int num, short bin[]);
void binary_to_int(int* num, short bin[]);
void power(int base, int power, int* ret);
void test_power();

int main(void)
{
	short abinary[8] = {1, 1, 1, 1, 1, 1, 1, 1};
	int abinaryint = 0;

	printf("abinaryint: %d\n", abinaryint);
	binary_to_int(&abinaryint, abinary);
	printf("abinaryint after: %d\n", abinaryint);

	return 0;
}

void int_to_binary(int num, short bin[])
{

}

void binary_to_int(int* num, short bin[])
{
	int powerInPlace = 0;
	for(int i = 7;i>=0;i--)
	{
		power(2, (7-i), &powerInPlace);
		*num += bin[i] * powerInPlace;
	}
}

void power(int base, int power, int* ret)
{
	*ret = 1;
	for(int i = 0;i<power;i++)
	{
		*ret *= base;	
	}	
}

void test_power()
{
	//if(power(2, 0) != 1) printf("power(2, 0) was ....)");
}
