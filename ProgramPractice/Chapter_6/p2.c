#include <stdio.h>

int main(void)
{
    for (int r = 0; r <= 5; r++)
    {
        for (int c = 0; c < r; c++)
        {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}