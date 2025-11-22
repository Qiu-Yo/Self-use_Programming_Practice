#include <stdio.h>

int main(void)
{
    float height_centimetre = 0;
    float height_inch = 0;
    float height_feet = 0;

    const int INCH_PER_FOOT = 12;
    const float INCH_PER_CM = 0.3937;

    printf("Enter Your height in centimetre:");

    while (scanf("%f", &height_centimetre) && height_centimetre > 0)
    {
        height_inch = INCH_PER_CM * height_centimetre;
        height_feet = (int)(height_inch / INCH_PER_FOOT);
        height_inch = height_inch - INCH_PER_FOOT * height_feet;

        printf("%.2f cm = %.f feets, %.2f inches.\n"
               "Enter Your height in centimrtre,or enter 0 to exit.\n\n",
               height_centimetre, height_feet, height_inch);
    }
    printf("Exit successfully.\n");
}