#include <stdio.h>

double calculate_cube(double index);
int main(void)

{
    double num = 0;
    double num_cubed;

    printf("Enter a number:\n");
    scanf("%lf", &num);

    printf("cubed %lf", num_cubed = calculate_cube(num));

    return 0;
}

double calculate_cube(double n)
{
    return n * n * n;
}