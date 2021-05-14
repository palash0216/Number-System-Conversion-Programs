#include <stdio.h>
#include <math.h>
int main()
{
    int dig;
    printf("Enter the digits in your number\n");
    scanf("%d",&dig);
    int hex_num[dig],rem,temp=0,new=0;
    printf("Enter your hecadecimal number\n");
    for (int i = 0; i < dig; i++)
    {
        scanf("%X",&hex_num[i]);
    }
    for(int i=dig;i>0;i--)
    {
        rem=hex_num[dig-1];
        new=new+rem*(pow(16,temp));
        temp++;dig--;
    }
    printf("\nyour DECIMAL number is : %d\n",new);




    
    return 0;
}