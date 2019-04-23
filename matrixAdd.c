#include <stdio.h> //Q8
int main()
{
    int a[100][100], b[100][100],sum[100][100];
    int r,c,i,j;
    printf("Enter number of rows: \n");
    scanf("%d",&r);
    printf("Enter number of columns: \n");
    scanf("%d",&c);
    printf("Enter 1st matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2nd matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of matrices: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}