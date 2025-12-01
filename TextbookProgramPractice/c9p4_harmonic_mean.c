// 编写一个函数，接受两个 double 类型的参数，
// 返回这两个参数的调和平均数。

#include <stdio.h>

double HarmonicMean(double num1, double num2)
{
    double result, result_reciprocal, num1_reciprocal, num2_reciprocal;
    num1_reciprocal = 1 / num1;
    num2_reciprocal = 1 / num2;
    result_reciprocal = (num1_reciprocal + num2_reciprocal) / 2;
    result = 1 / result_reciprocal;
    return result;
}

int main(void)
{
    double a, b;
    printf("Enter two number, and output the harmonic mean of them.\n");
    scanf("%lf %lf", &a, &b);
    printf("the harmonic mean of %lf and %lf is %lf.\n", a, b, HarmonicMean(a, b));
    return 0;
}