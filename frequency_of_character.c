/*Program to find the frequency of a character inn a string*/
#include<stdio.h>
int main()
{
    char string[50];
    char ch;
    int i;
    int frequency=0;
    printf("Enter the String\t\t");
    gets(string);
    printf("Enter the character::\t");
    scanf("%c",&ch);
    for(i=0;string[i]!='\0';i++)
    {
        if(ch==string[i])
            frequency++;

    }
    printf("Frequency of the given character is :%d", frequency);
    return 0;
}


