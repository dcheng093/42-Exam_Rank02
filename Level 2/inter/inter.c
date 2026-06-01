#include <unistd.h>

int seen(char c, char *str, int index)
{
    int i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int exists(char c, char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int ac, char *av[])
{
    int i = 0;
    if (ac == 3)
    {
        while (av[1][i])
        {
            if (!seen(av[1][i], av[1], i)
                && exists(av[1][i], av[2]))
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}