#include "ft_printf.h"
#include <unistd.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
        res = res * 10 + str[i++] - '0';
    return res * sign;
}

int main(int ac, char *av[])
{
    int res = 0;
    if (ac == 4)
    {
        int n1 = ft_atoi(av[1]);
        int n2 = ft_atoi(av[3]);
        if (av[2][0] == '+')
            res = n1 + n2;
        else if (av[2][0] == '-')
            res = n1 - n2;
        else if (av[2][0] == '*')
            res = n1 * n2;
        else if (av[2][0] == '/')
            res = n1 / n2;
        else if (av[2][0] == '%')
            res = n1 % n2;
        ft_printf("%d\n", res);
    }
    else
        write(1, "\n", 1);
}