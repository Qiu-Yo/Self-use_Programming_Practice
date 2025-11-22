#include <stdio.h>

int main(void)
{
    int ascii = 0;

    printf("Enter a ASCII code.\n");
    scanf("%d", &ascii);

    if (ascii > 255)
    {
        printf("Error,cannot find the ASCII code with number %d.\n", ascii);
    }
    else
        printf("You have enter a number %d,and in ASCII,it is %c.\n", ascii, ascii);

    return 0;
}