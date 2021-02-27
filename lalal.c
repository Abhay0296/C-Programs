#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[30],str2[20]="aeiouAEIOU";
    int i,j,count=0;
    printf("Enter the string");
    gets(str1);
    for(i=0;str1[i];i++)
    {
        for(j=0;str2[j];j++)
        {
            if(str1[i]==str2[j])
            {
                count++;
            break;
            }
        }
    }
    printf("Number of vewels are %d",count);
    getch();
}
