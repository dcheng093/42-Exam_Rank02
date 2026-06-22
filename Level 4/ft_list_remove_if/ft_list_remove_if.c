#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *tmp;
    while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        tmp = *begin_list;
        *begin_list = (*begin_list)->next;
        free(tmp);
    }
    t_list *cur = *begin_list;
    if (*begin_list)
    {
        while (cur->next)
        {
            if (cmp(cur->next->data, data_ref) == 0)
            {
                tmp = cur->next;
                cur->next = cur->next->next;
                free(tmp);
            }
            else cur = cur->next;
        }
    }
}