#include<stdio.h>

int main()
{
    char a[]="Move space to begining";
    int n=strlen(a)-1,count = n;

    //MoveSpace(a,0,strlen(a)-1);
    for(int i=n;i>=0;i--)
    {
        if(a[i] != ' ')
        a[count--] = a[i];
    }

    while(count>=0)
        a[count--] = ' ';
 printf("%s", a);

    return 0;
}
