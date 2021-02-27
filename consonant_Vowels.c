#include<stdio.h>
#include<string.h>
int main()
{
    char string[50];
    int i,vowels,consonant;
    i=vowels=consonant=0;
    printf("Enter the string:\t");
    gets(string);
                  while(string[i]='\0')
    {
        if(string[i]=='a'|| string[i]=='e'|| string[i]=='i'|| string[i]=='o'|| string[i]=='u'|| string[i]=='A'|| string[i]=='E'|| string[i]=='I'|| string[i]=='O'
            || string[i]=='U')

{

        vowels++;
}
            else
            {


                consonant++;
                i++;
            }
            printf("Vowels is %d\n",vowels);
            printf("Consonants are %d",consonant);
            return 0;
    }
    }
