#include <unistd.h>

int is_prime(int n)
{
    int i = 2;
    if (n < 2)
        return (0);
    while (i * i <= n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void ft_putnbr(int n)
{
    char c;
    if (n > 9)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char *av[])
{
    int i = 0;
    int n = 0;
    int sum = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] < '0' || av[1][i] > '9')
            {
                write(1, "0\n", 2);
                return (0);
            }
            n = n * 10 + av[1][i++] - '0';
        }
        i = 2;
        while (i <= n)
        {
            if (is_prime(i))
                sum += i;
            i++;
        }
        ft_putnbr(sum);
    }
    else write(1, "0", 1);
    write(1, "\n", 1);
}

// #include <limits.h>
// #include <stdio.h>
// int main(void)
// {
//    printf("%d\n", INT_MIN); 
// }