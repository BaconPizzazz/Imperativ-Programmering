#include <stdio.h>

void modifyValue(int *ptr)
{
    *ptr = 100;
}

int main()
{

    int num = 1;
    int *p_num;
    /* Set pointer to num's address */

    p_num = &num; // Set pointer to num1s address

    printf("Value of num = \t%d", num);
    printf("Value of p_num = \t%d\n", *p_num);
    /* Now change the value of *p_num */
    *p_num = 14;

    printf(" num = \t%d\n", num);

    return 0;
}
