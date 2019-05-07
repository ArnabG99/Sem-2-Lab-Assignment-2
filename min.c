#include <stdio.h> //Q14
int minimum(int a,int b);
int main()
{
    int n1,n2,n3,n4,min1,min2,min;
    printf("Enter four integer values: \n");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    min1 = minimum(n1,n2);
    min2 = minimum(n3,n4);
    min = minimum(min1,min2);
    printf("Mminimum number = %d",min);
    return 0;    
}
int minimum(int a,int b)
{
    if(a<b)
    {
        return a;
    }else
    {
        return b;
    }    
}