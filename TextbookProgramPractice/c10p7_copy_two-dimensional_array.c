// 7. 编写一个程序，初始化一个 double 类型的二维数组，使用编程练习 2 中的一个拷贝函数把该数组中的数据拷贝至另一个二维数组中
// （因为二维数组是数组的数组，所以可以使用处理一维数组的拷贝函数来处理数组中的每个子数组）。
#include <stdio.h>

void copy_ptr(double *target_array, const double *source_array, int array_length) // 使用指针作为函数参数,来自c10p2.c
{
    for (int i = 0; i < array_length; i++)
    {
        *target_array = *source_array;
        target_array++;
        source_array++;
    }
}
int main()
{
    double arr1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    double arr2[3][4];
    // 我们不能直接拷贝二维数组中的数组元素，我们只能再深入一层，分别以每个数组元素作为target_array
    // 于是需要使用循环拷贝每个子数组
    for (int i = 0; i < 3; i++)
    {
        copy_ptr(arr2[i], arr1[i], 4); // 拷贝每一行的4个元素
    }
    // 验证
    printf("arr2的内容：\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.1f ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
