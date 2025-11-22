//第二章编程练习第4题

#include <stdio.h>
void jolly(void), deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}

void jolly()
{
    printf("For he's a jolly good fellow!\n");
}

void deny()
{
    printf("Which nobody can deny!\n");
}