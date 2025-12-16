#include<stdio.h>
int main()
{
    int i,j,n,m;
    
    printf("Enter the number of rows of triangle: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        long int coeff=1;
        for(m=0;m<n-i-1;m++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%ld ",coeff);
            coeff=coeff*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}

