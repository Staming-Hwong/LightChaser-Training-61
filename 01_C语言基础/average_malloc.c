#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("要输入几个数？ ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("个数报错\n");
        return 1;
    }
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("申请内存失败QAQ\n");
        return 1;
    }
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        printf("第 %d 个数：", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("平均值 = %.2f\n", sum / n);
    free(arr);
    return 0;
}
