#include <stdio.h>

int find_max(int arr[], int length)
{
    int max = arr[0];
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    // 测试用例1：普通情况
    int test_arr1[8] = {1, 3, 2, 14, 5, 6, 7, 8};
    int length1 = sizeof(test_arr1) / sizeof(test_arr1[0]);
    printf("测试1 - 数组: ");
    for (int i = 0; i < length1; i++)
        printf("%d ", test_arr1[i]);
    printf("\n最大值: %d\n\n", find_max(test_arr1, length1));

    // 测试用例2：最大值在开头
    int test_arr2[5] = {100, 3, 2, 14, 5};
    int length2 = sizeof(test_arr2) / sizeof(test_arr2[0]);
    printf("测试2 - 最大值在开头\n");
    printf("最大值: %d\n\n", find_max(test_arr2, length2));

    // 测试用例3：最大值在结尾
    int test_arr3[5] = {1, 3, 2, 14, 200};
    int length3 = sizeof(test_arr3) / sizeof(test_arr3[0]);
    printf("测试3 - 最大值在结尾\n");
    printf("最大值: %d\n\n", find_max(test_arr3, length3));

    // 测试用例4：所有元素相同
    int test_arr4[4] = {5, 5, 5, 5};
    int length4 = sizeof(test_arr4) / sizeof(test_arr4[0]);
    printf("测试4 - 所有元素相同\n");
    printf("最大值: %d\n\n", find_max(test_arr4, length4));

    // 测试用例5：负数情况
    int test_arr5[6] = {-10, -3, -25, -1, -8, -5};
    int length5 = sizeof(test_arr5) / sizeof(test_arr5[0]);
    printf("测试5 - 负数数组\n");
    printf("最大值: %d\n\n", find_max(test_arr5, length5));

    // 测试用例6：混合正负数
    int test_arr6[7] = {-10, 3, -25, 0, 8, -5, 12};
    int length6 = sizeof(test_arr6) / sizeof(test_arr6[0]);
    printf("测试6 - 混合正负数\n");
    printf("最大值: %d\n\n", find_max(test_arr6, length6));

    return 0;
}