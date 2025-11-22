// 编写一个程序把你的年龄转换成天数，并显示这两个值
// 这边也是使用了比较超前的scanf函数and整了个小烂活

#include <stdio.h>
int main(void)
{
    int age, livedays;
    printf("你今年几岁啦？快告诉我吧！我帮你算算你活了多少天！\n");
    scanf("%d", &age);
    printf("如果是%d岁的话,我算算......\n你已经活了至少%d天!\n", age, livedays = age * 365);
    return 0;
}