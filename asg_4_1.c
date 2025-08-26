#include <stdio.h>
int edit(int *x) { return *x += 1; }
int main()
{
    int x;
    printf("Enter the value of x\n");
    scanf("%d", &x);
    printf("Before calling edit %d\n", x);
    edit(&x);
    printf("After calling edit %d\n", x);
    int array[4] = {x, 5, 20, 50};
    printf("stored values is : ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}
