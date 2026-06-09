#include <unistd.h>

int main(int ac, char *av[])
{
    int i = 0;
    int first = 1;
    if (ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    while (av[1][i])
    {
        while ((av[1][i] >= 9 && av[1][i] <= 13) || (av[1][i] == 32))
            i++;
        if (!av[1][i])
            break;
        if (!first)
            write(1, "   ", 3);
        first = 0;
        while (av[1][i] && !((av[1][i] >= 9 && av[1][i] <= 13) || (av[1][i] == 32)))
            write(1, &av[1][i++], 1);
    }
    write(1, "\n", 1);
}