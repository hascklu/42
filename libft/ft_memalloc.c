#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(*str) * size)))
		return (NULL);
	ft_bzero(str, size);
	return ((void *)str);
}
