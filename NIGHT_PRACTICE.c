#include<stdio.h>
int main()
{
    int n,i,s=0,n1;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&n1);
        s=s+n1;


    }
    printf("SUM IS %d",s);



    return 0;
}

