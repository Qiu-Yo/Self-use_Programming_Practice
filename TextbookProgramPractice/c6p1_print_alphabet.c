#include <stdio.h>

int main(void)
{
    char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

    for (int index = 0; index < 26; index++)
    {
        printf("%c ", alphabet[index]);
    }

    return 0;
}