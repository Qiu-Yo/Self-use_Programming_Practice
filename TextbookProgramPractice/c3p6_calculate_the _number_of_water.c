#include <stdio.h>

int main(void)
{
    double quart, gram, amount;
    printf("Enter the quart of Water.\n");
    scanf("%lf", &quart);
    gram = quart * 950.0;
    amount = gram / 3.0e-23;
    printf("%lf quart water have %e molecule.\n", quart, amount);

    return 0;
}