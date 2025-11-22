// 第二章编程练习第五题

#include <stdio.h>
void br(void), ic(void);

int main()
{
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
}
void br()
{
    printf("Brazil,Russia");
}
void ic()
{
    printf("India,China");
}