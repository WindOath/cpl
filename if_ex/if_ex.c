#include <stdio.h>

int main(void)
{
    int price;
    printf("请输入价格：");
    scanf("%d", &price);

    if (price >= 100) {
        printf("不要了，谁要谁买去。啦啦啦。\n");
    } else {
        printf("我买了");
    }

    return 0;
}