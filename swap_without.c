#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping are %d %d\n",a,b);
    printf("\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping are:%d %d",a,b);
    return 0;
}
// let a=10 b=20
// a=30; b=a-b=30-20=10
// a=a-b=30-10=20
