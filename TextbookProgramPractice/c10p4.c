// 4. 编写一个函数，返回存储在 double 类型数组中最大值的下标，并在一个简单的程序中测试该函数。
#include <stdio.h>

int find_subscript_of_max(double arr[], int arr_length)
{
    if (arr_length == 0)
    {
        return -1;
    }
    double max = arr[0];
    int subscript = 0;
    for (int i = 1; i < arr_length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            subscript = i;
        }
    }
    return subscript;
}
int main()
{
    // 测试1：正常情况
    double arr1[] = {3.14, 2.71, 1.41, 9.81};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int idx1 = find_subscript_of_max(arr1, n1);
    printf("测试1: 最大值下标 = %d, 值 = %.2f\n", idx1, arr1[idx1]);

    // 测试2：最大值在开头
    double arr2[] = {99.9, 45.6, 78.3, 12.4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int idx2 = find_subscript_of_max(arr2, n2);
    printf("测试2: 最大值下标 = %d, 值 = %.2f\n", idx2, arr2[idx2]);

    // 测试3：最大值在末尾
    double arr3[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int idx3 = find_subscript_of_max(arr3, n3);
    printf("测试3: 最大值下标 = %d, 值 = %.2f\n", idx3, arr3[idx3]);

    // 测试4：空数组
    double arr4[] = {};
    int n4 = 0;
    int idx4 = find_subscript_of_max(arr4, n4);
    printf("测试4: 空数组返回值 = %d (应为-1)\n", idx4);

    // 测试5：所有元素相等
    double arr5[] = {7.0, 7.0, 7.0};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    int idx5 = find_subscript_of_max(arr5, n5);
    printf("测试5: 所有元素相等时返回第一个最大值的下标 = %d\n", idx5);

    return 0;
}