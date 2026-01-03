// 5. 编写一个函数，返回存储在 double 类型数组中最大值和最小值的差值，并在一个简单的程序中测试该函数。
#include <stdio.h>
double cal_range(double arr[], int arr_length)
{
    if (arr_length == 0)
    {
        return -1;
    }

    double max = arr[0];
    double min = arr[0];
    for (int i = 1; i < arr_length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return max - min;
}

int main(void)
{
    // 测试1：正常数组
    double arr1[] = {3.5, 1.2, 9.8, 4.1, 2.7};
    double result1 = cal_range(arr1, 5);
    printf("数组1的极差: %.2f\n", result1); // 应输出 8.60

    // 测试2：空数组
    double arr2[] = {};
    double result2 = cal_range(arr2, 0);
    if (result2 == -1)
    {
        printf("数组2为空数组，返回错误值 -1\n");
    }
    else
    {
        printf("数组2的极差: %.2f\n", result2);
    }

    // 测试3：单元素数组
    double arr3[] = {42.0};
    double result3 = cal_range(arr3, 1);
    printf("数组3的极差: %.2f\n", result3); // 应输出 0.00

    // 测试4：包含负数的数组
    double arr4[] = {-5.5, 2.3, -1.0, 7.8, 0.0};
    double result4 = cal_range(arr4, 5);
    printf("数组4的极差: %.2f\n", result4); // 应输出 13.30

    return 0;
}