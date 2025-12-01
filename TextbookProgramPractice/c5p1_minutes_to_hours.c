#include <stdio.h>

int main(void)
{
    int exit = 1;
    int minutes = 1;
    int hours = 1;
    const int MIN_PER_HOUR = 60;

    printf("Enter minute\n"
           "Enter 0 to exit.\n");
    scanf("%d", &exit);

    while (exit > 0)
    {
        minutes = exit;
        hours = minutes / MIN_PER_HOUR;
        minutes = exit % MIN_PER_HOUR;

        if (hours == 1 || hours == 0) // hour的单数形式判断
        {
            printf("It is %d hour %d minutes.\n"
                   "Enter another minutes to continue.\n"
                   "Enter 0 to exit.\n\n",
                   hours, minutes);
            scanf("%d", &exit);
        }
        else if (hours != 1) // hour的复数形式判断
        {
            printf("It is %d hours %d minutes.\n"
                   "Enter another minutes to continue.\n"
                   "Enter 0 to exit.\n\n",
                   hours, minutes);
            scanf("%d", &exit);
        }
    }
    printf("Exit successful.\n");

    return 0;
}

/*
需要改进的地方：
1. 变量命名和拼写问题
2. 逻辑冗余
3. 代码重复
4. 输入验证缺失
*/