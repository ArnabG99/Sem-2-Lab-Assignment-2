#include <stdio.h>  //Q2
int main()
{
    int arr[10000];
    int n,i,even,sum=0;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    printf("Addition of elements = %d",sum);
}