#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int res = 0;
    if (ac == 4)
    {
        int n1 = atoi(av[1]);
        int n2 = atoi(av[3]);
        if (av[2][0] == '+')
            res = n1 + n2;
        else if (av[2][0] == '-')
            res = n1 - n2;
        else if (av[2][0] == '/')
            res = n1 / n2;
        else if (av[2][0] == '*')
            res = n1 * n2;
        else if (av[2][0] == '%')
            res = n1 % n2;
        printf("%d\n", res);
    }
    else
        write (1, "\n", 1);
}