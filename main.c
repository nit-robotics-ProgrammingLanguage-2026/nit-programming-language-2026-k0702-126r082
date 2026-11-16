
#include <stdio.h>

int func3(int a, int b);

int main(void)
{
    int number;

    scanf("%d", &number);
    printf("%d", func3(10, number));

    return 0;
}

int func3(int a, int b)
{
    int difference = a - b;

    if (difference < 0)
    {
        difference = -difference;
    }

    return difference;
}