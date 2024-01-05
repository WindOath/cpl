#include <stdio.h>

int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(void)
{
    int year;
    printf("请输入年份: ");
    scanf("%d", &year);

    if (is_leap_year(year)) {
        printf("%d年是闰年。\n", year);
    } else {
        printf("%d年不是闰年。\n", year);
    }


    return 0;
}