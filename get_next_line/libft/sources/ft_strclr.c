#include "../includes/libft.h"

void	ft_strclr(char *s)
{
	size_t		len;

	if (!s)
		return ;
	len = ft_strlen(s);
	ft_bzero(s, len);
}
