#include <unistd.h>

int main(int ac, char *av[])
{
    int i = 0;
    int j;
    int end;
    int first = 1;
    if (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;
        while (i >= 0)
        {
            end = i;
            while (i >= 0 && av[1][i] != ' ')
                i--;
            if (!first)
                write(1, " ", 1);
            first = 0;
            j = i + 1;
            while (j <= end)
                write(1, &av[1][j++], 1);
            i--;
        }
    }
    write(1, "\n", 1);
}