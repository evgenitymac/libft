#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *object;
	
	if (alst && del)
	{
		while (*alst)
		{
			object = (*alst)->next;
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = NULL;
			*alst = object;
		}
	//	??*alst = NULL;
	}
}
