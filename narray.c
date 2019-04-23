#include <stdio.h>  //Q1
int main()
{
    int arr[10000];
    int n,i,even,odd,pos,neg;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }else{
            neg++;
        }
        if(arr[i]%2==0)
        {
            even++;
        }else{
            odd++;
        }
    }
    printf("Positive numbers : %d \n",pos);
    printf("Negatives numbers : %d \n",neg);
    printf("Even numbers : %d \n",even);
    printf("Odd numbers : %d \n",odd);
}