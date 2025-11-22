#include <stdio.h>

int main(void)
{
    int modulus = 0;
    int dividend = 0;
    printf("Enter modulus.\n");

    while (scanf("%d", &modulus) != 1 || modulus == 0)
    {
        printf("Invalid input. Please enter a non-zero integer: ");
        while (getchar() != '\n')
            ;
    }

    while (scanf("%d", &dividend))
    {
        printf("%d mod %d is %d.\n\n"
               "enter another dividend.\n",
               dividend, modulus, dividend % modulus);
        while (getchar() != '\n')
            ;
    }
    printf("Exit successfully.\n");

    return 0;
}