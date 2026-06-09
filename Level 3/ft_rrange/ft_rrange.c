#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int size = start <= end ? end - start + 1: start - end + 1;
    int step = (start <= end) ? -1 : 1;
    int i = 0;
    int *arr = malloc(sizeof(int) * size);
    if (!arr)
        return (NULL);
    while (i < size)
    {
        arr[i++] = end;
        end += step;
    }
    return (arr);
}

// #include <stdlib.h>
// int*ft_rrange(int start, int end){int size=start>end?start-end+1:end-start+1;int step=start>end?1:-1;int i=0;
// int*arr=malloc(sizeof(int)*size);if(!arr)return(NULL);while(i<size){arr[i++]=end;end+=step;}return(arr);}