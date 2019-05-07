#include<stdio.h> //Q12
int myPower(int a,int b);
int main()
{
    int a,b,value;
    printf("Enter the value of a and b: \n");
    scanf("%d%d",&a,&b);
    value=myPower(a,b);
    printf("Value of %d raised to %d is %d",a,b,value);
    return 0;
}
int myPower(int a,int b)
{
    int i,value;
    value=a;
    for(i=1;i<b;i++)
    {
    value=value*a;
    }
    return value;
}