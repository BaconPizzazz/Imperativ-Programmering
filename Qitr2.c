#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 10)
    {
        i++;
        if (i % 2 == 0)
        {
            break;
        }
        printf("value of i: %d\n", i);
    }
}
