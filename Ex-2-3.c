#include <stdio.h>

#define INPUT_HEX "0x92df2"
#define HEX_ADD 10

int htoi(char *s, int len);
int stringlength(char *s);
int power(int base, int power);

int main(void)
{
    int length = stringlength(INPUT_HEX);
    printf("Hexadecimal: %s\n", INPUT_HEX);
    printf("Integer: %d\n", htoi(INPUT_HEX, length));
}

int htoi(char *s, int len)
{
    int ans = 0;

    for (int i = len - 1; i >= 2; i--)
    { 
        int valueAsInt;
        int powerOfPlace = power(16, len-i-1);

        if(s[i] >= '0' && s[i] <= '9')
            valueAsInt = s[i] - '0';
        else if(s[i] >= 'a' && s[i] <= 'f')
            valueAsInt = s[i] - 'a' + HEX_ADD;
        else if(s[i] >= 'A' && s[i] <= 'F')
            valueAsInt = s[i] - 'A';
        else 
            return -1;

        ans += valueAsInt * powerOfPlace;
    }
    
    return ans;
}

int stringlength(char *s)
{
    int i = 0;
    while(s[i] != '\0') 
        i++;
    return i; 
}

int power(int base, int power)
{
    int answer = 1;

    for (int i = 0; i < power; i++)
        answer *= base;

    return answer;
}