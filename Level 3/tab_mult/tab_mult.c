#include <unistd.h>

void    ft_putnbr(int n)
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
    int j = 0;
    if (ac == 2)
    {
        while (av[1][i])
            j = j * 10 + av[1][i++] - '0';
        i = 1;
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(j);
            write(1, " = ", 3);
            ft_putnbr(i * j);
            i++;
            write(1, "\n", 1);
        }
    }
    else write(1, "\n", 1);
}