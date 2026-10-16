#include <stdio.h>
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int a, b;
    printf("请输入两个整数: ");
    scanf("%d %d", &a, &b);
    printf("交换前: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("交换后: a=%d, b=%d\n", a, b);
    return 0;
}
