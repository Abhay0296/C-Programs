
#include <stdio.h>
#include<conio.h>
/* Iterative function to reverse digits of num*/
int reversDigits(int num)
{
	int rev_num = 0;
	while(num > 0)
	{
		rev_num = rev_num*10 + num%10;
		num = num/10;
	}
	return rev_num;
}

/*Driver program to test reversDigits*/
int main()
{
	int num;
	printf("%Enter the number\n");
	scanf("%d",&num);
	printf("Reverse of no. is %d\n", reversDigits(num));
	if(num==reversDigits(num))
	{
        printf("Number is palindrone\n");
	}
	else
        printf("Number is not palindrone\n");

	getchar();
	return 0;
}
