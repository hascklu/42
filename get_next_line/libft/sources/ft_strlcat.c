#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_d;
	size_t len_s;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (len_d >= size)
		return (size + len_s);
	else
		ft_strncat(dst, src, size - len_d - 1);
	return (len_d + len_s);
}
