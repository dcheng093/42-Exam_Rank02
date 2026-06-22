#include <stdlib.h>

int is_delimiter(char c)
{
    return ((c >= 9 && c <= 13) || (c == 32));
}

int word_count(char *str)
{
    int count = 0, i = 0;
    while (str[i])
    {
        while (str[i] && is_delimiter(str[i]))
            i++;
        if (str[i])
            count++;
        while (str[i] && !is_delimiter(str[i]))
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
