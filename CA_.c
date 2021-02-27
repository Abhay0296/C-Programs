#include<stdio.h>
#include<conio.h>
void abhay();          //function prototype declaration
void argentina();
void main()
{
    printf("HELLO!!Hi\n");
    abhay();             //Calling Function
    printf("I'm BACK\n");
    return 0;
}
void abhay()              //Called function or function defination
{
    printf("I'm in another block\n");
    argentina();
}
void argentina()
{
    printf("I'm in recursive call\n");
}
