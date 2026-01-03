#include <stdio.h>
void copy_arr(double target_array[], const double source_array[], int array_length)//使用数组作为函数参数
{
    for (int i = 0; i < array_length; i++)
    {
        target_array[i] = source_array[i];
    }
}
void copy_ptr(double *target_array, const double *source_array, int array_length)//使用指针作为函数参数
{
    for (int i = 0; i < array_length; i++)
    {
        *target_array = *source_array;
        target_array++;
        source_array++;
    }
}
void copy_ptrs(double target_array[], const double source_array[], double *next_element)//使用标记数组结束位置的指针作为参数
{
    for (; source_array < next_element; source_array++)
    {
        *target_array = *source_array;
        target_array++;
    }
}
int main()
{
    double source[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
    double target1[5] = {0};
    double target2[5] = {0};
    double target3[5] = {0};
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%lf ", source[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%lf ", target1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%lf ", target2[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%lf ", target3[i]);
    }
    printf("\n");
}