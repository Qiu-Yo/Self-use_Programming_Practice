// 编写一个函数，从标准输入中读取字符，直到遇到文件结尾。程序要报告每个字符是否是字母。如果是，还要报告该字母在字母表中的数值位置。例如，c和c在字母表中的位置都是 3。合并一个函数，以一个字符作为参数，如果该字符是一个字母则返回一个数值位置，否则返回-1。
#include <stdio.h>
#include <ctype.h>

int LetterPosition(char ch)
{
    if (isalpha(ch))
    {
        if (islower(ch))
        {
            return (int)(ch - 'a' + 1);
        }
        else
        {
            return (int)(ch - 'A' + 1);
        }
    }
    else
    {
        return -1;
    }
}
int main()
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        printf("This Letter position is %d\n", LetterPosition(ch));
    }
    return 0;
}