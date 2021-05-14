#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1, dec_num, rem[50] ;
    printf("Enter your Number\n");
    scanf("%d", &dec_num);
    while (dec_num != 0)
    {
        rem[i] = dec_num % 2;
        dec_num = dec_num / 2;
        i++;
    }
    for (int j = i - 1; j > 0; j--)
    {
        printf("%d", rem[j]);
    }
    return 0;
}