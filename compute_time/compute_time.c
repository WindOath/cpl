#include <stdio.h>

int main(void)
{
    int hour1, minute1;
    int hour2, minute2;

    printf("请输入第一个时间\n");
    scanf("%d %d", &hour1, &minute1);

    printf("请输入第二个时间\n");
    scanf("%d %d", &hour2, &minute2);

    int time1 = hour1 * 60 + minute1;
    int time2 = hour2 * 60 + minute2;
    int compute_time = time2 - time1;

    printf("时间差是:%d小时%d分钟", compute_time / 60, compute_time % 60);

    return 0;
}