#include <stdio.h>
#include <math.h>
int main()
{
    int dig;
    printf("Enter the digits in your number\n");
    scanf("%d",&dig);
    int oct_num[dig],rem,temp=0,new=0;
    printf("Enter your octal number\n");
    for (int i = 0; i < dig; i++)
    {
        scanf("%o",&oct_num[i]);
    }
    for(int i=dig;i>0;i--)
    {
        rem=oct_num[dig-1];
        new=new+rem*(pow(8,temp));
        temp++;dig--;
    }
    printf("\nyour DECIMAL number is : %d\n",new);




    
    return 0;
}