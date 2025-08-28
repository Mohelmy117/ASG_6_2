#include <stdio.h>

int main()
{
    int arr_1[5];
    int max, min;
    int max_pos = 0, min_pos = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr_1[i]);
    }
    max = arr_1[0];
    min = arr_1[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr_1[i]);
    }
    for (int i = 1; i < 5; i++)
    {
        if (arr_1[i] > max)
        {
            max = arr_1[i];
            max_pos = i;
        }

        if (arr_1[i] < min)
        {
            min = arr_1[i];
            min_pos = i;
        }
    }
    printf("\nthe maximum number is %d in position %d\n", max, max_pos);
    printf("the minimum number is %d in position %d\n", min, min_pos);
    return 0;
}