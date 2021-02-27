#include <stdio.h>
int main()
{
    char s1[100], v[]="aeiouAEIOU";
    int i,j,count=0;

    printf("Enter the string\n");
    gets(s1);
    for(i=0;s1[i];i++)
    {
        for(j=0;v[j];j++)
        {
            if(s1[i]==v[j])
            {
                printf("\t%c", i[s1]);


                count++;
            break;
            }
        }
    }
    printf("\n Vowels are%d",count);

    return 0;
}
