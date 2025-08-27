#include <stdio.h>
void revrese(char *p1, char *p2)
{
    int temp;
    while (p1 < p2)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
}
int main()
{
    char string[100];
    char *p = string;
    char *p1;
    char *p2;

    printf("Input : ");
    scanf("%[^\n]", string);

    // printf("%s", string);
    int len = 0;
    while (p[len] != '\0')
    {
        len++;
    }
    revrese(string, string + len - 1);
    p = string;
    while (*p)
    {
        while (*p == ' ' && *p != '\0')
        {
            p++;
        }
        p1 = p;
        while (*p != ' ' && *p != '\0')
        {
            p++;
        }
        p2 = p - 1;
        revrese(p1, p2);
    }
    printf("Output : %s", string);
    return 0;
}
