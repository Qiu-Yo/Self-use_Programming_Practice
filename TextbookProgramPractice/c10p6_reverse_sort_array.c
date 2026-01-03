// 6. 编写一个函数，把 double 类型数组中的数据倒序排列，并在一个简单的程序中测试该函数。
#include <stdio.h>
int reverse_sort(double *arr, int arr_length)
{
    if (arr_length <= 0)
    {
        return -1;
    }
    else if (arr_length == 1)
    {
        return 0;
    }

    double temp;
    for (int i = 0; i < arr_length / 2; i++) // 只需交换一半的元素就可以了，所以循环次数是数组长度的一半
    {
        temp = arr[i];                      // 把数组第i个元素赋给中间变量
        arr[i] = arr[(arr_length - 1) - i]; // 把对称的那个元素赋给第i个元素，数组下标范围是0~arr_length-1，所以要记得-1
        arr[(arr_length - 1) - i] = temp;   // 把中间变量给对称元素
    }
    return 0;
}
int main()
{
    // 测试1：正常数组
    double arr1[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("测试1 - 原始数组: ");
    for (int i = 0; i < len1; i++)
        printf("%.1f ", arr1[i]);

    reverse_sort(arr1, len1);
    printf("\n倒序后: ");
    for (int i = 0; i < len1; i++)
        printf("%.1f ", arr1[i]);

    // 测试2：偶数个元素
    double arr2[] = {10.0, 20.0, 30.0, 40.0};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("\n\n测试2 - 原始数组: ");
    for (int i = 0; i < len2; i++)
        printf("%.1f ", arr2[i]);

    reverse_sort(arr2, len2);
    printf("\n倒序后: ");
    for (int i = 0; i < len2; i++)
        printf("%.1f ", arr2[i]);

    return 0;
}