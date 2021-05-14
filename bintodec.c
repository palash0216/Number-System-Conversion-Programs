#include <stdio.h>
#include <math.h>
int main()
{
    int dig;
    printf("Enter your the number of digits in your binary number\n");
    scanf("%d", &dig);
    int bin_num[dig], temp = 0, rem, dec = 0;
    printf("Enter your binary number\n");
    for(int i=0;i<dig;i++)
    {
    scanf("%d", &bin_num[i]);
    }
    for (int i = dig; i > 0; i--)
    {
        rem = bin_num[dig-1];
        dec = dec + rem * (pow(2, temp));
        temp++;dig--;
    }
    printf("decimal number is : %d", dec);

    return 0;
} 