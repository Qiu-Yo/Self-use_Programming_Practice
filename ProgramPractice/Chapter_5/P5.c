// 计算从1到n的和的算法

#include <stdio.h>

int main(void)
{
    int counter = 0;
    int end_num = 0;
    int sum = 0;

    printf("Enter a target number:\n");
    scanf("%d", &end_num);

    if (end_num < 0)
    {
        printf("Error: Please enter a non-negative number.\n");
        return 1;
    }
    while (counter <= end_num)
    {
        sum += counter;
        counter++;
    }

    printf("result is %d\n", sum);

    return 0;
}