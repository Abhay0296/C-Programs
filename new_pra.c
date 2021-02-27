#include<stdio.h>
#include<conio.h>
int main()
{
int arr[10],i,n;
printf("Enter number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d\n",&arr[i]);
}
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}

 return 0;
}
