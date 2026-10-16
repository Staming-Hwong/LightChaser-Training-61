#include <stdio.h>
int main()
{
    double a, b;
    char op;
    printf("请输入表达式: ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("输入格式不对\n");
        return 1;
    }
    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0.0) {
                printf("除数不能为 0\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        default:
            printf("不支持的运算符 %c\n", op);
            break;
    }
    return 0;
}
