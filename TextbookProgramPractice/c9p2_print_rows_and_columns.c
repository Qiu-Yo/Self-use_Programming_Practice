// 设计一个函数 chline(ch，i，j)，打印指定的字符j行i列。在一个简单的驱动程序中测试该函数
#include <stdio.h>
// 设计函数
void chline(char ch, int i, int j)
{

    for (int row = 0; row < j; row++)
    {
        for (int column = 0; column < i; column++)
        {
            printf("%2c", ch);
        }
        printf("\n");
    }
}
// 函数测试
int main(void)
{
    char character;
    int rows, columns;
    printf("Enter character|rows|columns\n");
    scanf("%c %d %d", &character, &rows, &columns);
    chline(character, columns, rows);
    return 0;
}