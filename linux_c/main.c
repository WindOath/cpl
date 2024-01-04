#include <stdio.h>

void newline(void)
{
    printf("\n");
}

void threeline(void)
{
    newline();
    newline();
    newline();
}

int main(void)
{
    printf("First line.\n");
    //newline();
    //newline();
    //newline();
    threeline();
    printf("Next line.\n");

    return 0;
}