#include <stdio.h>

int main(void)
{
    printf("%6s%-12s%10s\n", "编号", "名称", "单价");
    printf("%6d%-12s%10.2f\n", 1, "铅笔", 0.50);
    printf("%6d%-12s%10.2f\n", 2, "笔记本", 3.80);
    printf("%6d%-12s%10.2f\n", 3, "橡皮", 0.75);
    printf("%6d%-12s%10.2f\n", 4, "圆规", 7.00);

    return 0;
}