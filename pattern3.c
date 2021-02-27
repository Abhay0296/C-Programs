#include<stdio.h>
#include<conio.h>
int main()
{

    int i,j,k;
    clrscr();
    int n=13;
    for(i=1;i<=n;i++)
    {
           for(j=1;j<=n-i;j++)
            printf(" ");
            for(k=1;k<=i;k++)
            printf("*");
            printf("\n");

            for(k=1;k<=i;k++)
            printf("*");
            printf("\t");

}


    getch();
}
