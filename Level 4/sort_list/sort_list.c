#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*cur;
	int		tmp;

	if (!lst)
		return (lst);
	cur = lst;
	while (cur->next)
	{
		if (!cmp(cur->data, cur->next->data))
		{
			tmp = cur->data;
			cur->data = cur->next->data;
			cur->next->data = tmp;
			cur = lst;
		}
		else
			cur = cur->next;
	}
	return (lst);
}

// #include "list.h"
// t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
// {
//     if (!lst) return lst;
//     t_list *curr = lst;
//     while (curr->next)
//     {
//         if (!cmp(curr->data, curr->next->data))
//         {
//             int tmp = curr->data;
//             curr->data = curr->next->data;
//             curr->next->data = tmp;
//             curr = lst;
//         }
//         else curr = curr->next;
//     }
//     return lst;
// }