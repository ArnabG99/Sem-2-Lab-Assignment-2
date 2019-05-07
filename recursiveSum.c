#include <stdio.h> //Q16
int sum(int num)
{
    if(num>0)
        return num + sum(num-1);
    else
        return 0;
}
int main()
{
    int n,s;
    printf("Enter a number : \n");
    scanf("%d",&n);
    s = sum(n); 
    printf("Sum = %d",s);
}