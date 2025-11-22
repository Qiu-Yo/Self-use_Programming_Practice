#include <stdio.h>
int main(void)
{
    char ch = 0;

    for (int row = 0; row <= 6; row++)
    {
        ch = 'F';
        for (int column = 1; column <= row; column++)
        {
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }
}