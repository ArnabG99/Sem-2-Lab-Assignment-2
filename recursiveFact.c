#include <stdio.h>
int fact(int num)
{
    if(num>1)
    {
        return num*fact(num-1);
    }
    else
    {
        return 1;
    }    
}
int main()
{
    int n,f;
    printf("Enter a number : \n");
    scanf("%d",&n);
    f = fact(n);
    printf("Factorial = %d",f);
}