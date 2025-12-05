// 编写并测试 Fibonacci()函数，该函数用循环代替递归计算斐波那契数
#include <stdio.h>
int Fibonacci(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    int pre1 = 1;
    int pre2 = 1;
    int current = 0;
    for (int i = 3; i <= n; i++)
    {
        current = pre1 + pre2;
        pre2 = pre1;
        pre1 = current;
    }
    return current;
}
#include <stdio.h>

int main()
{
    // 测试前10个斐波那契数
    for (int i = 1; i <= 10; i++)
    {
        printf("F(%d) = %d\n", i, Fibonacci(i));
    }

    // 测试边界情况
    printf("F(0) = %d\n", Fibonacci(0));

    return 0;
}