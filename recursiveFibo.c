#include <stdio.h>
int fibo(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2));
}
int main()
{
    int n,f;
    printf("Enter a number : \n");
    scanf("%d",&n);
    f = fibo(n);
    printf("f(%d) = %d",n,f);
    return 0;
}