#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
    int factor = 2, first = 1;
    if (ac != 2){printf("\n");return 0;}
    int n = atoi(av[1]);
    if (n == 1){printf("1");return 0;}
    while (n > 1)
    {
        if (n % factor == 0)
        {
            if (!first)
                printf("*");
            first = 0;
            printf("%d", factor);
            n /= factor;
        }
        else factor++;
    }
    printf("\n");
}