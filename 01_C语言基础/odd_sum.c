#include <stdio.h>
int main()
{
    int sum = 0;
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("1~100 的奇数和 = %d\n", sum);
    return 0;
}
