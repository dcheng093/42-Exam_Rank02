#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    char *dst;
    while (src[i])
        i++;
    dst = malloc(sizeof(char) * (i + 1));
    if (!dst)
        return NULL;
    i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = src[i];
    return (dst);
}