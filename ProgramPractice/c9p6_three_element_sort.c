// 编写并测试一个函数，该函数以3个 double 变量的地址作为参数，把最小值放入第1个变量，中间值放入第2个变量，最大值放入第3个变量。
#include <stdio.h>
void Sort(double *a, double *b, double *c)
{
    double temp;
    // 使第一个元素最小
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c)
    {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    // 再排序后两个元素
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main(void)
{
    double num1 = 1145.14;
    double num2 = 114.514;
    double num3 = 11.4514;
    printf("%6lf %6lf %6lf\n", num1, num2, num3);
    Sort(&num1, &num2, &num3);
    printf("%6lf %6lf %6lf\n", num1, num2, num3);
    return 0;
}