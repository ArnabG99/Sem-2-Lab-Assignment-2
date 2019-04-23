#include <stdio.h>  //Q3
int main()
{
    int arr[10000];
    int n,i,even,min,max;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("Largest element: %d \n",max);
    printf("Smallest element: %d \n",min);
    return 0;
}