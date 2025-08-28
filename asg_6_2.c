#include <stdio.h>
int main()
{

    struct sum_complex
    {
        int real;

        int img;

    } c1, c2, sum;

    printf("For 1st comlex number\n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%d\t%d", &c1.real, &c1.img);

    printf("For 2nd comlex number\n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%d\t%d", &c2.real, &c2.img);
    sum.real = c1.real + c2.real;
    sum.img = c1.img + c2.img;
    printf("sum = %d + %di", sum.real, sum.img);

    return 0;
}