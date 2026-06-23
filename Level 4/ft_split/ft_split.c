#include <stdlib.h>

int is_delimiter(char c)
{
    return ((c >= 9 && c <= 13) || (c == 32));
}

int word_count(char *s)
{
    int count = 0, i = 0;
    while (s[i])
    {
        while (s[i] && is_delimiter(s[i]))
            i++;
        if (s[i])
            count++;
        while (s[i] && !is_delimiter(s[i]))
            i++;
    }
    return count;
}

char **ft_split(char *str)
{
    int i = 0, k = 0, words = word_count(str);
    char **res = malloc(sizeof(char *) * (words + 1));
    if (!res)
        return NULL;
    while (str[i])
    {
        while (str[i] && is_delimiter(str[i]))
            i++;
        if (str[i])
        {
            int j = 0, start = i;
            while (str[i] && !is_delimiter(str[i]))
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
    res[k] = '\0';
    return res;
}

// #include <stdio.h>

// int main(int ac, char *av[])
// {
//     (void)ac;
//     char **res = ft_split(av[1]);
//     int i = 0;
//     while (res[i])
//         printf("[%s]\n", res[i++]);
// }