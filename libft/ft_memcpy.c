#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *str;

	str = (char *)dst;
	while (n--)
	{
		*(char *)str = *(char *)src;
		str++;
		src++;
	}
	return (dst);
}
