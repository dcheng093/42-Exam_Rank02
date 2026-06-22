#include <stdlib.h>

int count_digit(int nbr)
{
    int count = 0;
    if (nbr <= 0)
        count++;
    while (nbr)
    {
        nbr /= 10;
        count++;
    }
    return count;
}

char *ft_itoa(int nbr)
{
    long n = nbr;
    int len = count_digit(n);
    char *str = malloc(sizeof(char) * (len + 1));
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    if (n == 0)
    {
        str[0] = '0';
        return str;
    }
    while (n)
    {
        str[--len] = n % 10 + '0';
        n /= 10;
    }
    return str;
}