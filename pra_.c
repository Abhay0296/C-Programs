#include<stdio.h>
#include<conio.h>
int calsum(int, int);
int main()
{
    int a,b,sum;
    printf("Enter the two numbers:: ");
    scanf("%d %d",&a,&b);
    sum=calsum(a,b);
    printf("The sum is %d\n",sum);
    printf("Original values of a & b is %d %d", a,b);
    return 0;
}
int calsum(int x,int y)
{
    int d;
    d=x+y;
    return d;
}
