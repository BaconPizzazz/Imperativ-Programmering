#include <stdio.h>

int main()
{
    float average;
    int arr[13] = {151, 123, 7, 1, -31, 0, 17, 9921, 9, 15, -1003, -3, 17};
    int sum = 0;
    int N = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
        else
            ;
    }

    average = sum / N;
    printf("sum %i\n", sum);
    printf("avg: %f\n", average);

    return 0;
}