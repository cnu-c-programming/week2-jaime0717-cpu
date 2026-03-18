#include <stdio.h>

int main()
{
    int n;
    int r = 1;
    scanf("%d", &n);

    do
    {
        ++r;
        if (n / r == (float)n / r)
        {
            printf("false");
            return 0;
        }
    } while (n - 1 > r);

    printf("true");

    return 0;
}
