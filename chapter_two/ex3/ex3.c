#include <stdio.h>

int main(void)
{
    //计算5%税率后的金额
    float amount, after_tex;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    after_tex = amount * 1.5;
    printf("With tax added: %.2f\n", after_tex);

    return 0;
}