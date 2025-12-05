// 使用递归函数重写c9p8
#include <stdio.h>
double Power(double a, int p)
{
    if (p == 1)
        return a;
    if (p > 1)
        return (a * Power(a, p - 1));
    if (p == 0)
        return 1.0;
    if (p < 0)
        return 1 / (Power(a, -p));
}
// 简单的测试
int main()
{
    // 基本测试
    printf("2.5^2 = %lf\n", Power(2.5, 2));   // 期望: 6.25
    printf("2.5^0 = %lf\n", Power(2.5, 0));   // 期望: 1.0
    printf("2.5^-2 = %lf\n", Power(2.5, -2)); // 期望: 0.16

    // 边界测试
    printf("0^3 = %lf\n", Power(0, 3));     // 期望: 0.0
    printf("1^100 = %lf\n", Power(1, 100)); // 期望: 1.0
    printf("2^10 = %lf\n", Power(2, 10));   // 期望: 1024.0

    // 大指数测试
    printf("2^20 = %lf\n", Power(2, 20)); // 期望: 1048576.0

    return 0;
}