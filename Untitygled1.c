
#include<stdio.h>
#include<string.h>

void main() {
	int i,o,len;
	char c,s[20];
	printf("enter the strng");
	scanf("%[^\n]s",s[i]);
	len=sizeof(s)/sizeof(s[0]);
	printf("chracter u want to count");
	scanf("%c",&c);
	for(i=0;i<=len;i++)
	{
	    if(s[i]==c)
	{
	    o++;
	}
	}
	printf("%d",o);

}
