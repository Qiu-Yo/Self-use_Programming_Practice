#include <stdio.h>
int main(void)
{
    char ch = 'A';
    for (int row = 0; row < 6; row++)
    {
        for (int column = 0; column <= row; column++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}