#include <stdio.h>

int main(void)
{

    // int overflow
    int intnum = 2147483647;
    printf("Original int:%d\n", intnum);
    intnum = intnum + 1;
    printf("Overflowed int:%d\n", intnum); // it will be -2147483648

    // float overflow
    float floatnum1 = 1.0e38;
    printf("Original float:%f\n", floatnum1);
    floatnum1 = floatnum1 * 10.0;
    printf("Overflowed float:%f\n", floatnum1); // it will be inf

    // float underflow
    float floatnum2 = 1.0e-40;
    printf("Original float:%.100f\n", floatnum2);
    floatnum2 = floatnum2 / 10.0;
    printf("Underflowed float:%.100f\n", floatnum2); // loss its precision

    return 0;
}