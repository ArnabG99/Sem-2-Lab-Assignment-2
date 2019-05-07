#include <stdio.h> //Q15
#include <math.h>
int main()
{
    int n,i,j,d;
    printf("Enter a number: \n");
    scanf("%d",&n);
    printf("Prime factors: \n");
    while (n%2 == 0) 
    { 
        printf("%d \n", 2); 
        n = n/2; 
    }
    for (int i = 3; i <= sqrt(n); i = i+2) 
    {
        while (n%i == 0) 
        { 
            printf("%d \n", i); 
            n = n/i; 
        } 
    } 
    if (n > 2) 
        printf ("%d ", n); 
}