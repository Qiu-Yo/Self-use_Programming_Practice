#include <stdio.h>

int main(void)
{
    int start_number = 0;
    int current_number = 0;
    int end_number = 0;

    printf("Enter a integer.\n");
    scanf("%d", &start_number);

    current_number = start_number;
    end_number = start_number + 10;
    while (current_number <= end_number)
    {
        printf("%d ", current_number);
        current_number++;
    }
    printf("\n");
    return 0;
}