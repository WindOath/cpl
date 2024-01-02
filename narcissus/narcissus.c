#include <stdio.h>

int main(void)
{
    int num;

    for (num = 100; num < 1000; num++) {
        int ones = num % 10;
        int tens = num / 10 % 10;
        int hundreds = num / 100;

        if ((ones*ones*ones) + (tens*tens*tens) + (hundreds*hundreds*hundreds) == num) {
            printf("水仙花数是：%d\n", num);
        }
    }

    return 0;
}