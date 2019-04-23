#include <stdio.h> //Q7
int main()
{
    int arr[10000];
    int n,i,key,pos;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be inserted: \n");
    scanf("%d",&key);
    printf("Enter position: \n");
    scanf("%d",&pos);
    arr[pos] = key;
    printf("Array Elements: \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}