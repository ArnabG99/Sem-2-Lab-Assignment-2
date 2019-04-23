#include <stdio.h>
int main()
{
    int num1,num2,i,tmp,lcm,hcf;
    printf("Enter two numbers: \n");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    for(i=1;i<=num1;i++)
    {
        if((num2*i)%num1==0)
        {
            lcm = num2*i;
            break;
        }
    }
    for(i=1;i<=num1;i++)
    {
        if(num2%i==0 && num1%i==0)
        {
            hcf = i;
        }
    }
    printf("HCF: %d \nLCM: %d",hcf,lcm);
    return 0;
}