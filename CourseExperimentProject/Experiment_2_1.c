#include <stdio.h>
#define TARGET_NUMBER 1000
int isPrime(int num)
{
    if (num <= 1) // 小于1不是素数
        return 0;
    if (num <= 3) // 2、3是素数
        return 1;
    if (num % 2 == 0 || num % 3 == 0) // 能被2、3整除就不是素数
        return 0;

    for (int i = 5; i * i <= num; i += 6) // 所以可以以步长为6循环，到num的平方根结束循环
    {
        if (num % i == 0 || num % (i + 2) == 0) // 只检测6k-1和6k+1两个因子即可
            return 0;
    }
    return 1;
}

int main(void)
{
    int count = 1; // 用来计数第n个孪生素数
    for (int i = 0; i < TARGET_NUMBER; i++)
    {
        if (isPrime(i))
        {
            if (isPrime(i + 2))
            {
                printf("第%d个孪生素数对是: (%ld,%ld)\n", count, i, i + 2);
                count++;
            }
        }
    }
}