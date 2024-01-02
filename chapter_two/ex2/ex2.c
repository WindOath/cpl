//计算球体体积
#include <stdio.h>

int main(void)
{
    //int volume;//volume：体积，radius：半径，参考公式v=4/3Πr^3
    float pi, v, r;
    pi = 3.14f;

    printf("请输入半径：");
    scanf("%f", &r);

    v = 4.0f / 3.0f * pi * (r*r*r);

    printf("球体积是%f", v);

    return 0;
}