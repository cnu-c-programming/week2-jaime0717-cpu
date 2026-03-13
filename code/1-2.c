#include <stdio.h>
int main()
{
    printf("%010s %010s %010s\n", "name", "id", "value");
    printf("%010s %010d % 10.2f\n", "kim", 12, 4.12);
    printf("%010s %010d % 10.2f\n", "lee", 1922, 3.21);
    printf("%010s %010d % 10.2f\n", "park", 432, 1.0);

    //%0n은 0으로 채워넣고, 공백은 공백으로 채워넣음

    return 0;
}
