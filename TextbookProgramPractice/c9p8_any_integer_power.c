// 设计一个函数，调用它能够计算实数a的任意整数次幂，不能使用math.h头文件
#include <stdio.h>

double power(double a, int p)
{
    double result = 1.0;
    if (p >= 1)
    {
        for (int i = 0; i <= p; i++)
        {
            result *= a;
        }
        return result;
    }
    else if (p == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i > p; i--)
        {
            result = result / a;
        }
        return result;
    }
}

// 简单的测试
int main()
{
    double a = 2.5;
    int p1, p2, p3;
    p1 = 2;
    p2 = 0;
    p3 = -2;
    printf("%lf\n", power(a, p1));
    printf("%lf\n", power(a, p2));
    printf("%lf\n", power(a, p3));
}