#include<stdio.h>
#include<conio.h>
void exc(int n, int arr1[])
{
    int i,temp;
    for(i=0;i<n;i+=2)
    {
        temp=arr1[i];
        arr1[i]=arr1[i+1];
        arr1[i+1]=temp;
}
 for(i=0;i<n;i++)
   {
       printf("Initial array elements  are %d\n", arr1[i]);
   }
int main()
{
   int arr1[100],n,i;
   printf("Array elements");
   scanf("%d", &n);
   printf("Eneter the array elements\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr1[i]);
   }
   for(i=0;i<n;i++)
   {
       printf("Initial array elements  are %d\n", arr1[i]);
   }
   exc(n,arr1);

   return 0;
   getch();

}


