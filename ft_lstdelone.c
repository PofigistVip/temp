

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (alst == NULL || *alst == NULL)
		return ;
	del((*alts)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}