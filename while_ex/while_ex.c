#include <stdio.h>

int main(void)
{
    int num = 1;

    while (num <= 10) {
        printf("我来了哦！\n现在还是小于10哦，现在是%d\n", num);
        ++num;
    }

    return 0;
}