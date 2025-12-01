#include <stdio.h>
#define HOURS_OF_A_DAY 24

int main(void)
{
    int entered_hour, day, hour;
    printf("Enter a integer hour.\nEnter Non-positive number to exit.\n"); // 用户提示
    while (scanf("%d", &entered_hour))                                     // 成功读取整数则进入循环
    {
        if (entered_hour <= 0) // 退出条件判断，非正数则退出循环
        {
            break;
        }
        day = entered_hour / HOURS_OF_A_DAY; // 计算
        hour = entered_hour % HOURS_OF_A_DAY;
        printf("%d hour(s) are %d day(s) and %d hour(s)\n\n", entered_hour, day, hour);            // 打印结果
        printf("Enter another integer hour to continune; \nEnter Non-positive number to exit.\n"); // 用户提示
    }
    printf("Program exited.\n"); // 程序退出提示
    return 0;
}