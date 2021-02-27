#include<stdio.h>
#include<conio.h>
int calsum(int *, int *);
int main()
{
    int a,b,sum;
    printf("Enter the two numbers:: ");
    scanf("%d %d",&a,&b);
    sum=calsum(&a,&b);
    printf("values of a & b after swap is %d %d", a,b);
    return 0;
}
int calsum(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;

}

