#include <stdio.h>

int main()
{
    int n1, n2;
    char op;

    scanf("%d %d %c", &n1, &n2, &op);

    switch (op)
    {
    case '+':
        printf("%d", n1 + n2);
        break;
    case '-':
        printf("%d", n1 - n2);
        break;
    case '*':
        printf("%d", n1 * n2);
        break;
    case '/':
        printf("%d", n1 / n2);
        break;
    default:
        printf("Try again");
    }
    return 0;
}
