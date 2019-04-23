#include <stdio.h> //Q6
int main()
{
    int arr[10000];
    int n,i,pos;
    printf("Eneter number of elements: \n");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter position to be deleted: \n");
    scanf("%d",&pos);
    arr[pos] = 0;
    printf("Array Elements: \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}