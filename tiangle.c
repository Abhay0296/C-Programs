#include<stdio.h>
int main()
{
    char display[100][100] = { {0} };

    triangle(display, 20, 0, 5);

    triangle(display, 15, 5, 5);
    triangle(display, 25, 5, 5);

    triangle(display, 10, 10, 5);
    triangle(display, 30, 10, 5);

    triangle(display,  5, 15, 5);
    triangle(display, 15, 15, 5);
    triangle(display, 25, 15, 5);
    triangle(display, 35, 15, 5);


    for (int i=0 ; i<100; i++) {
        printf("\n");
        for (int j=0; j<100; j++) {
            printf("%c", display[i][j]);
        }
    }
}
