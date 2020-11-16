#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;
	if (lst* != NULL)
	{
		while (*lst != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		tmp->next = NULL;
	}
	else
		*lst = new;
}