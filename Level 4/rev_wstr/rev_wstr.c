#include <unistd.h>
int main(int ac, char *av[])
{
    int i = 0, j, end, first = 1;
    if (ac == 2)
    {
        char *s = av[1];
        while (s[i])
            i++;
        i--;
        while (i >= 0)
        {
            end = i;
            while (i >= 0 && s[i] != 32)
                i--;
            if (!first)
                write(1, " ", 1);
            first = 0, j = i + 1;
            while (j <= end)
                write(1, &s[j++], 1);
            i--;
        }
    }
    write(1, "\n", 1);
}