#include <stdio.h>
int main(void)
{
    double a;
    int b;
    int count = 1;
    double result = 1.0;

    printf("Enter a and b, then I output b power of a.\n"
           "Use [space] to separate the two numbers.\n"
           "a is real and b is an integer.\n"); // 用户提示
    scanf("%lf %d", &a, &b);
    while (count <= b) // 循环迭代b次
    {
        result *= a;
        count++;
    }
    printf("The result is %lf", result); // 输出结果
    return 0;
}