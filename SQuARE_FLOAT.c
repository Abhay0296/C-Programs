//SQUARE OF A FLOAT NUMBER
#include<stdio.h>
#include<conio.h>
float square(float);  //function prototype declaration
int main()
{
    float f,b;
    printf("ENTER THE VALUE");
    scanf("%f", &f);
    b=square(f);   //Calling Function
    printf("SQAURE OF NUMBER IS:%f",b);
    return 0;
}
float square(float x)
{
    float c;
    c=(x*x);
    return(c);
}

