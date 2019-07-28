#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;

	if (!(begin = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (lst && f)
	{
		begin = f(lst);
		if (lst)
			begin->next = ft_lstmap(lst->next, f);
	}
	return (begin);
}
