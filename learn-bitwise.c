#include <stdio.h>

// Function to print a number in binary
void printBinary(unsigned int num) {
    for (int i = 7; i >= 0; i--) {
        int bit = (num >> i) & 1; // Extract the ith bit from the right
        printf("%d", bit);
    }
}

int main() {
    unsigned int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%u", &decimalNumber);

    printf("Binary: ");
    printBinary(decimalNumber);
    printf("\n");

	unsigned int shiftedToRight = decimalNumber >> 1;
	printf(">> 1:   ");
	printBinary(shiftedToRight);
	printf("\n");
	
	unsigned int shiftedToLeft = decimalNumber << 1;
	printf("<< 1:   ");
	printBinary(shiftedToLeft);
	printf("\n");
	
	unsigned int complement = ~decimalNumber;
	printf("~:      ");
	printBinary(complement);
	printf("\n");

    return 0;
}

