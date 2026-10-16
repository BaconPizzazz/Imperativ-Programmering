#include <stdio.h>

int main()
{
    int MYARRAY[4] = {2, 3, 5, 7};

    for (int i = 0; i < 4; i++)
    {
        printf("Værdi af array index number %i\n", MYARRAY[i]);
    }
    return 0;
}