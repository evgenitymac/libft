#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *object;

	if (alst && new)
	{
		object = *alst;
		*alst = new;
		new->next = object;
	}
}
