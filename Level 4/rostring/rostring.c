#include <unistd.h>

int main(int ac, char *av[])
{
    int i = 0, first = 1, first_word_start = 0, first_word_end, start = 0;
    if (ac < 2){write(1, "\n", 1);return 0;}
    char *s = av[1];
    while (s[i] && ((s[i] >= 9 && s[i] <= 13) || s[i] == 32))
        i++;
    first_word_start = i;
    while (s[i] && !((s[i] >= 9 && s[i] <= 13) || s[i] == 32))
        i++;
    first_word_end = i;
    while (s[i])
    {
        while (s[i] && ((s[i] >= 9 && s[i] <= 13) || s[i] == 32))
            i++;
        if (!s[i])
            break;
        if (!first)
            write(1, " ", 1);
        first = 0;
        start = i;
        while (s[i] && !((s[i] >= 9 && s[i] <= 13) || s[i] == 32))
            i++;
        write(1, &s[start], i - start);
    }
    if (first_word_start != first_word_end)
    {
        if (!first)
            write(1, " ", 1);
        write(1, &s[first_word_start], first_word_end - first_word_start);
    }
    write(1, "\n", 1);
}