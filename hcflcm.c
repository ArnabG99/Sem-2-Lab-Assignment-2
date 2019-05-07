#include <stdio.h>  //Q13
int fhcf(int num1,int num2);
int flcm(int num1,int num2);
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
    }//makes num1 < num2
    lcm = flcm(num1,num2);
    hcf = fhcf(num1,num2);
    printf("HCF: %d \nLCM: %d",hcf,lcm);
    return 0;
}
int fhcf(int num1,int num2)
{
    int i,hcf;
    for(i=1;i<=num1;i++)
    {
        if(num2%i==0 && num1%i==0)
        {
            hcf = i;
        }
    }
    return hcf;
}
int flcm(int num1,int num2)
{
    int i,lcm;
    for(i=1;i<=num1;i++)
    {
        if((num2*i)%num1==0)
        {
            lcm = num2*i;
            break;
        }
    }
    return lcm;
}