#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    scanf("%d",n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+4);j++)
            if(j>=n-i&&j<=n+i)
            printf("*");
        else
            printf(" ");
        printf("\n");
    }
    return 0;
}

