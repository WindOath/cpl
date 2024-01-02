#include <stdio.h>

int main(void)
{
    for (int num1 = 1; num1 < 10; ++num1) {
        for (int num2 = 1; num2 < 10; ++num2) {
            printf("%d×%d=%2d  ", num2, num1, num1 * num2);
            if (num2 >= num1) break;
        }

        printf("\n");
    }

    return 0;
}