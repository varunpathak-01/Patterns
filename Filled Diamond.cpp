#include<stdio.h>
void main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=n-i;j++)
                printf(" ");
            for(j=1;j<=2*i-1;j++)
                printf("*");
        }
        else
        {
            for(j=n;j<i;j++)
                printf(" ");
            for(j=0;j<=(4*n-2*i-2);j++)
                printf("*");
        }
        printf("\n");
    }
}
