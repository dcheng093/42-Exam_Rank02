#include <stdlib.h>

int is_sep(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int word_count(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        while (str[i] && is_sep(str[i]))
            i++;

        if (str[i])
            count++;

        while (str[i] && !is_sep(str[i]))
            i++;
    }
    return count;
}

char **ft_split(char *str)
{
    int i = 0;
    int j;
    int k = 0;
    int words = word_count(str);
    char **res;

    res = malloc(sizeof(char *) * (words + 1));
    if (!res)
        return NULL;

    while (str[i])
    {
        while (str[i] && is_sep(str[i]))
            i++;

        if (str[i])
        {
            j = 0;
            int start = i;

            while (str[i] && !is_sep(str[i]))
                i++;

            res[k] = malloc(sizeof(char) * (i - start + 1));
            if (!res[k])
                return NULL;

            while (start < i)
                res[k][j++] = str[start++];

            res[k][j] = '\0';
            k++;
        }
    }
    res[k] = NULL;
    return res;
}
