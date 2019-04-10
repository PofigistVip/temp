

#include <string.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*current;
	t_list	*prev;

	if (lst == NULL)
		return (NULL);
	start = f(lst);
	current = start;
	lst = lst->next;
	while (lst)
	{
		current->next = f(lst);
		current = current->next;
		lst = lst->next;
	}
	current->next = NULL;
	return (start);
}