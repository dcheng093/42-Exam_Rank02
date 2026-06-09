#include <stdlib.h>

int *ft_range(int start, int end)
{
    int size = (start <= end) ? (end - start + 1) : (start - end + 1);
    int step = (start <= end) ? 1 : -1;
    int i = 0;
    int *arr = malloc(sizeof(int) * size);
    if (!arr)
        return NULL;
    while (i < size)
    {
        arr[i++] = start;
        start += step;
    }
    return arr;
}