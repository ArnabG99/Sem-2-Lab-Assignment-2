#include <stdio.h> //Q5
int main()
{
    int arr[10000];
    int n,i,key,f=0;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number to be searched: \n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
            f=f+1;
    }
    if(f==0)
    {
        printf("%d is not present in the array",key);
    }
    else
    {
        printf("%d is present in the array %d times",key,f);
    }
    return 0;
}