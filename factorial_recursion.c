#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{

    int n,a;
    printf("Enter the number");
    scanf("%d",&n);
    a=fact(n);
    printf("Factorial of nuber is %d",a);
    return 0;
}
int fact(int n)
{
    int f;
    if(n==1)
        return 1;
    else
        f=n*fact(n-1);
    return f;

}
