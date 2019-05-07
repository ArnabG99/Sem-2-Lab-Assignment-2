#include <stdio.h> //Q11
int main()
{
    int a[10][10], t[10][10], r, c, i, j;
    printf("Enter no. rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    // Storing elements of the matrix
    printf("Enter elements of matrix:\n");
    for(i=0; i<r; ++i)
    {
        for(j=0; j<c; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Displaying the matrix a[][] */
    printf("Entered Matrix: \n");
    for(i=0; i<r; ++i)
    {
        for(j=0; j<c; ++j)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    // Finding the transpose of matrix a
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            t[j][i] = a[i][j];
        }
    // Displaying the transpose of matrix a
    printf("Transpose of Matrix:\n");
    for(i=0; i<c; ++i)
    {
        for(j=0; j<r; ++j)
        {
            printf("%d  ",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}