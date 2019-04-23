#include <stdio.h>  //Q4
int main()
{
    int arr[10000];
    int n,i,tmp;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
    for(i=0;i<n/2;i++)//ith element is replaced with (n-1-i)th element
    {
        tmp = arr[i];//to hold value
        arr[i] = arr[n-i-1];
        arr[n-i-1] = tmp;
    }
    printf("Reversed array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
}