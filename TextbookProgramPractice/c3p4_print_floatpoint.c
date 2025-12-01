#include <stdio.h>

int main(void)
{
    float num = 0.0;
    printf("Enter a floating-point value:");
    scanf("%f", &num);

    printf("fixed-point notation:%f\n", num);
    printf("exponential notation:%e\n", num);
    printf("p notation:%a\n", num);

    return 0;
}