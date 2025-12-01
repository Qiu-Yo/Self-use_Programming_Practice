#include <stdio.h>
void PrintSpace(int n);
void PrintSeq(int n);
void PrintRev(int n);
char Alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(void)
{
    char end_letter = 0;
    printf("Enter a Capital Letter.\n");
    scanf("%c", &end_letter);

    int samsara = end_letter - 'A' + 1; // 得出主循环要进行的次数
    int space_count = end_letter - 'A'; // 第一行有的空格数

    for (int i = 1; i <= samsara; i++) // 主循环
    {
        PrintSpace(space_count);
        PrintSeq(i);
        PrintRev(i - 1);

        printf("\n");
        space_count--;
    }
}

// 控制打空格的函数
void PrintSpace(int n)
{
    const char SPACE = ' ';
    for (int i = 0; i < n; i++)
    {
        printf("%c", SPACE);
    }
}

// 控制顺序打字母的函数
void PrintSeq(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", Alphabet[i]);
    }
}

// 控制倒序打字母的函数
void PrintRev(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c", 'A' + i);
    }
}